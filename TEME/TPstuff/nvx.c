#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int pg;
    int pui;
    int hp;
} m;
int main()
{
    m *ma;
    int p1,x;
    FILE *fis;
    printf("Dati informatiile aferente mamiferului:\n");
    printf("-Durata medie de viata: ");
    scanf("%d",&ma->hp);
    printf("-Perioada de gestatie: ");
    scanf("%d",&ma->pg);
    printf("-Numarul mediu de pui pe care ii naste: ");
    scanf("%d",&ma->pui);
    printf("Pentru afisare pe ecran apasati 1. Pentru afisare in fisier apasati 0: ");
    scanf("%d",&x);
    if(x==1)
    {
        printf("Informatiile aferente mamiferului sunt:\n");
        printf("-Durata medie de viata: %d\n",ma->hp);
        printf("-Perioada de gestatie: %d\n",ma->pg);
        printf("-Numarul mediu de pui pe care ii naste: %d\n",ma->pui);
    }
    else
    {
        if((fis=fopen("outr.txt","w"))==NULL)
        {
        printf("eroare deschidere fisier\n");
        exit(1);
        }
        fprintf(fis,"Informatiile aferente mamiferului sunt:\n");
        fprintf(fis,"-Durata medie de viata: %d\n",ma->hp);
        fprintf(fis,"-Perioada de gestatie: %d\n",ma->pg);
        fprintf(fis,"-Numarul mediu de pui pe care ii naste: %d\n",ma->pui);
    }
    fclose(fis);
    return 0;
}
