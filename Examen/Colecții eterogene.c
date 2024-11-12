#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI      3.14159

void *alocare(size_t nOcteti)
{
    void *p=malloc(nOcteti);
    if(!p){
        printf("memorie insuficienta\n");
        exit(EXIT_FAILURE);
        }
    return p;
}

typedef enum{TFCerc,TFTriunghi,TFDreptunghi}TipFigura;
typedef struct{
    TipFigura tip;
    union{
        struct{
            double r;       // raza
            }cerc;
        struct{
            double a,b,c;   // lungimile laturilor
            }tr;
        struct{
            double latime,inaltime;
            }dr;
        };
    }Figura;

// analogic pentru arie
double perimetru(const Figura *f)
{
    switch(f->tip){
        case TFCerc:return 2*PI*f->cerc.r;
        case TFTriunghi:return f->tr.a+f->tr.b+f->tr.c;
        case TFDreptunghi:return 2*(f->dr.latime+f->dr.inaltime);
        }
}

// analogic pentru Triunghi_new, Dreptunghi_new
Figura *Cerc_new(double r)
{
    Figura *f=(Figura*)alocare(sizeof(Figura));

    f->tip=TFCerc;
    f->cerc.r=r;
    return f;
}

int main(void)
{
    Figura *figuri[100];        // vector de pointeri la figuri alocate dinamic
    int i,nFiguri=0;
    // introducere figuri
    figuri[nFiguri++]=Cerc_new(7.3);
    figuri[nFiguri++]=Triunghi_new(3,4,5);
    // afisare perimetre
    for(i=0;i<nFiguri;i++){
        printf("%g\n",perimetru(figuri[i]));
        }
    return 0;
}
/**
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI      3.14159

void *alocare(size_t nOcteti)
{
    void *p=malloc(nOcteti);
    if(!p){
        printf("memorie insuficienta\n");
        exit(EXIT_FAILURE);
        }
    return p;
}

// predeclararea structurii Figura, deoarece ea este folosita in VTable inainte de a fi definita
struct _Figura;
typedef struct _Figura Figura;

typedef struct{
    double (*arie)(Figura *f);      	// pointer la functia care va calcula aria elementului f
    double (*perimetru)(Figura *f);	// pointer la functia care va calcula perimetrul elementului f
    }VTable;

struct _Figura{     	// structura initiala din care vor fi derivate toate tipurile de elemente
    VTable *vTable; 	// pointer la vTable-urile specifice fiecarui tip de figura
    };

typedef struct{
    Figura figura;      // figura trebuie sa fie pe prima pozitie in tipurile derivate din Figura, pentru a se putea folosi campul vTable indiferent de tipul elementului (in orice tip, vTable va fi la offsetul 0 fata de inceputul structurii)
    double r;           // elemente specifice unui cerc
    }Cerc;

// functiile care implementeaza functiile polimorfice pentru tipul Cerc
double Cerc_arie(Figura *f)
{
    Cerc *c=(Cerc*)f;
    return PI*c->r*c->r;
}

double Cerc_perimetru(Figura *f)
{
    Cerc *c=(Cerc*)f;
    return 2*PI*c->r;
}

// variabila care contine pointeri la implementarile functiilor polimorfice pentru Cerc
VTable vTable_cerc={Cerc_arie, Cerc_perimetru};

Cerc *Cerc_new(double r)
{
    Cerc *c=(Cerc*)alocare(sizeof(Cerc));
    c->figura.vTable=&vTable_cerc;       // seteaza pointerul vTable la structura cu functiile specifice pentru Cerc
    c->r=r;
    return c;
}

// analogic se implementeaza triunghiul si dreptunghiul

int main(void)
{
    Figura *figuri[100];        // vector de pointeri la figuri alocate dinamic
    int i,nFiguri=0;
    // introducere figuri
    figuri[nFiguri++]=(Figura*)Cerc_new(1);
    figuri[nFiguri++]=(Figura*)Triunghi_new(3,4,5);
    // afisare perimetre
    for(i=0;i<nFiguri;i++){
        printf("%g\n",figuri[i]->vTable->perimetru(figuri[i]));
        }
    return 0;
}
*/
