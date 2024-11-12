#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#define Mamifer 1
#define Insecta 2
#define Peste 3

typedef struct
{
    int pg;
    int pui;
} m;

typedef struct
{
    unsigned int pi;
    bool z;
    bool p;
} i;

typedef struct
{
    bool a;
    unsigned int ad;
    unsigned int v;
} pe;

typedef struct
{
    unsigned int an;
    unsigned int al;
    unsigned int vit;
} pa;

typedef union
{
    m *ma;
    i *in;
    pe *pes;
    pa *pas;
} vi;

typedef struct
{
    int hp;
    vi *vie;
} c;
int menu(int o)
{
    printf("Dati tipul de vietuitoare:\n");
    printf("1)Pentru mamifer \n");
    printf("2)Pentru insecta \n");
    printf("3)Pentru peste \n");
    printf("4)pentru pasare \n");
    printf("0)Iesire din program \n");
    printf("Alegeti o optiune: ");
    scanf("%d",&o);
    return o;
}
int main()
{
    c *ca;
    int *p1,o;
    o=menu(o);
    while(o!=0)
    {
        switch(o)
        {
        case 1:
            printf("Dati informatiile aferente mamiferului:\n");
            printf("-Durata medie de viata: ");
            scanf("%d",&p1);
            ca->hp=p1;
            printf("-Perioada de gestatie: ");
            scanf("%d",&p1);
            ca->vie->ma->pg=p1;
            printf("-Numărul mediu de pui pe care ii naste: ");
            scanf("%d",&p1);
            ca->vie->ma->pui=p1;
            printf("Informatiile aferente mamiferului sunt:\n");
            printf("-Durata medie de viata: ");
            printf("%d",ca->hp);
            printf("-Perioada de gestatie: ");
            printf("%d",ca->vie->ma->pg);
            printf("-Numărul mediu de pui pe care ii naste: ");
            printf("%d",ca->vie->ma->pui);
            break;
        case 2:
            printf("Dati informatiile aferente insectei:\n");
            printf("-Durata medie de viata: ");
            scanf("%d",&p1);
            ca->hp=p1;
            printf("-Numarul de picioare: ");
            scanf("%d",&p1);
            ca->vie->in->pi=p1;
            printf("-Posibilitatea de zbor: ");
            scanf("%B",&p1);
            ca->vie->in->z=p1;
            printf("-Gradul de pericol pentru om ?");
            scanf("%B",&p1);
            ca->vie->in->p=p1;
            printf("Informatiile aferente insectei sunt:\n");
            printf("-Durata medie de viata este: ");
            printf("%d",ca->hp);
            printf("-Numarul de picioare este: ");
            printf("%d",ca->vie->in->pi);
            printf("-Posibilitatea de zbor este: ");
            printf("%B",ca->vie->in->z);
            printf("-Gradul de pericol pentru om este: ");
            printf("%B",ca->vie->in->p);
            break;
        case 3:
            printf("Dati informatiile aferente pestelui:\n");
            printf("-Durata medie de viata: ");
            scanf("%d",&p1);
            ca->hp=p1;
            printf("-Tipul de apa: ");
            scanf("%d",&p1);
            ca->vie->pes->a=p1;
            printf("-Adancimea maxima la care se poate intalni: ");
            scanf("%B",&p1);
            ca->vie->pes->ad=p1;
            printf("-Viteza maxima de înot: ");
            scanf("%B",&p1);
            ca->vie->pes->v=p1;
            printf("Informatiile aferente pestelui sunt:\n");
            printf("-Durata medie de viata: ");
            printf("%d",ca->hp);
            printf("-Tipul de apa: ");
            printf("%d",ca->vie->pes->a);
            printf("-Adancimea maxima la care se poate intalni: ");
            printf("%B",ca->vie->pes->ad);
            printf("-Viteza maxima de înot: ");
            printf("%B",ca->vie->pes->v);
            break;
        case 4:
            printf("Dati informatiile aferente pasarii:\n");
            printf("-Durata medie de viata: ");
            scanf("%d",&p1);
            ca->hp=p1;
            printf("-Anvergura aripilor: ");
            scanf("%d",&p1);
            ca->vie->pas->an=p1;
            printf("-Altitudinea maximă de zbor: ");
            scanf("%B",&p1);
            ca->vie->pas->al=p1;
            printf("-Viteza maximă de inot: ");
            scanf("%B",&p1);
            ca->vie->pas->vit=p1;
            printf("Informatiile aferente pasarii sunt:\n");
            printf("-Durata medie de viata: ");
            printf("%d",ca->hp);
            printf("-Anvergura aripilor: ");
            printf("%d",ca->vie->pas->an);
            printf("-Altitudinea maximă de zbor: ");
            printf("%B",ca->vie->pas->al);
            printf("-Viteza maximă de zbor: ");
            printf("%B",ca->vie->pas->vit);
            break;
        case 0:
            return 0;
            exit(1);
            break;
        default:
            printf("Optiunea aleasa nu exista! Alegeti o optiune valabila: ");
            o=menu(o);
            break;
        }
        o=menu(o);
    }
    return 0;
}
