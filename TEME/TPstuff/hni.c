#include<stdio.h>
#include<stdbool.h>
#define Mamifer 1
#define Insecta 2
#define Peste 3
typedef struct
{
    unsigned int pg:4;
    unsigned int pui:4;
} m;
typedef struct
{
    unsigned int pi:10;
    bool z:1;
    bool p:1;
} i;
typedef struct
{
    bool a:1;
    unsigned int ad:15;
} pe;
typedef union
{
    m *ma;
    i *in;
    pe *pes;
} vi;
typedef struct
{
    unsigned int hp:8;
    vi *vie;
} c;
int main()
{
    c *ca;
    int *p1;
    int o=1,x;
    FILE *fis;
    while(o)
    {
        printf("Meniu principal:\nDati tipul de vietuitoare:\n1)pentru mamifer\n2)pentru insecta\n3)pentru peste\nPentru afisare listei curente memorate in fisier: 4\nPentru iesire din meniu: 0\n");
        scanf("%d",&x);
        if(x==1)
            o=Mamifer;
        else if(x==2)
            o=Insecta;
        else if(x==3)
            o=Peste;
        else o=x;
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
            break;
        case 4:
            if((fis=fopen("out.txt","w"))==NULL)
            {
                printf("eroare deschidere fisier\n");
                exit(1);
            }
            fclose("out.txt");
            if((fis=fopen("out.txt","w"))==NULL)
            {
                printf("eroare deschidere fisier\n");
                exit(1);
            }
            if((fis=fopen("out.txt","r+"))==NULL)
            {
                printf("eroare deschidere fisier\n");
                exit(1);
            }
            if(o==Mamifer)
            {
                fprintf(fis,"Informatiile aferente mamiferului sunt:\n");
                fprintf(fis,"-Durata medie de viata: ");
                fprintf(fis,"%d",ca->hp);
                fprintf(fis,"-Perioada de gestatie: ");
                fprintf(fis,"%d",ca->vie->ma->pg);
                fprintf(fis,"-Numărul mediu de pui pe care ii naste: ");
                fprintf(fis,"%d",ca->vie->ma->pui);
                fscanf(fis,"Informatiile aferente mamiferului sunt:\n");
                fscanf(fis,"-Durata medie de viata: ");
                fscanf(fis,"%d",ca->hp);
                fscanf(fis,"-Perioada de gestatie: ");
                fscanf(fis,"%d",ca->vie->ma->pg);
                fscanf(fis,"-Numărul mediu de pui pe care ii naste: ");
                fscanf(fis,"%d",ca->vie->ma->pui);
                printf("Informatiile aferente mamiferului sunt:\n");
                printf("-Durata medie de viata: ");
                printf("%d",ca->hp);
                printf("-Perioada de gestatie: ");
                printf("%d",ca->vie->ma->pg);
                printf("-Numărul mediu de pui pe care ii naste: ");
                printf("%d",ca->vie->ma->pui);
            }
            else if(o==Insecta)
            {
                fprintf(fis,"Informatiile aferente insectei sunt:\n");
                fprintf(fis,"-Durata medie de viata este: ");
                fprintf(fis,"%d",ca->hp);
                fprintf(fis,"-Numarul de picioare este: ");
                fprintf(fis,"%d",ca->vie->in->pi);
                fprintf(fis,"-Posibilitatea de zbor este: ");
                fprintf(fis,"%B",ca->vie->in->z);
                fprintf(fis,"-Gradul de pericol pentru om este: ");
                fprintf(fis,"%B",ca->vie->in->p);
                fscanf(fis,"Informatiile aferente insectei sunt:\n");
                fscanf(fis,"-Durata medie de viata este: ");
                fscanf(fis,"%d",ca->hp);
                fscanf(fis,"-Numarul de picioare este: ");
                fscanf(fis,"%d",ca->vie->in->pi);
                fscanf(fis,"-Posibilitatea de zbor este: ");
                fscanf(fis,"%B",ca->vie->in->z);
                fscanf(fis,"-Gradul de pericol pentru om este: ");
                fscanf(fis,"%B",ca->vie->in->p);
                printf("Informatiile aferente insectei sunt:\n");
                printf("-Durata medie de viata este: ");
                printf("%d",ca->hp);
                printf("-Numarul de picioare este: ");
                printf("%d",ca->vie->in->pi);
                printf("-Posibilitatea de zbor este: ");
                printf("%B",ca->vie->in->z);
                printf("-Gradul de pericol pentru om este: ");
                printf("%B",ca->vie->in->p);
            }
            else if(o==Peste)
            {
                fprintf(fis,"Informatiile aferente pestelui sunt:\n");
                fprintf(fis,"-Durata medie de viata: ");
                fprintf(fis,"%d",ca->hp);
                fprintf(fis,"-Tipul de apa: ");
                fprintf(fis,"%d",ca->vie->pes->a);
                fprintf(fis,"-Adancimea maxima la care se poate intalni: ");
                fprintf(fis,"%B",ca->vie->pes->ad);
                fscanf(fis,"Informatiile aferente pestelui sunt:\n");
                fscanf(fis,"-Durata medie de viata: ");
                fscanf(fis,"%d",ca->hp);
                fscanf(fis,"-Tipul de apa: ");
                fscanf(fis,"%d",ca->vie->pes->a);
                fscanf(fis,"-Adancimea maxima la care se poate intalni: ");
                fscanf(fis,"%B",ca->vie->pes->ad);
                printf("Informatiile aferente pestelui sunt:\n");
                printf("-Durata medie de viata: ");
                printf("%d",ca->hp);
                printf("-Tipul de apa: ");
                printf("%d",ca->vie->pes->a);
                printf("-Adancimea maxima la care se poate intalni: ");
                printf("%B",ca->vie->pes->ad);

            }
            break;
        case 0:
            return 0;
            exit(1);
        default:
            printf("Optiunea aleasa nu exista!");
            break;
        }
    }
    return 0;
}
