#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char *name;
    int grade[1];
} elev;
float medie(float a,float b)
{
    float c;
    c=(a+b)/2;
    return c;
}
int main()
{
    int n,m,aux1,aux2;
    float *a;
    char *p;
    elev *v,aux;
    printf("Dati numarul de elevi: ");
    scanf("%d",&n);
    v=(elev*)malloc(n*sizeof(elev));
    if(v==NULL)
    {
        printf("EROARE");
        exit(1);
    }
    a=(float *)malloc(n*sizeof(float));
        if(a==NULL)
        {
            printf("EROARE");
            exit(1);
        }
    for(int i=0; i<n; i++)
    {
        printf("Dati lungimea numelui elevului %d: ",i+1);
        int m;
        scanf("%d",&m);
        m++;
        v[i].name=(char *)malloc((m)*sizeof(char));
        if(v[i].name==NULL)
        {
            printf("EROARE");
            exit(1);
        }
        getchar();
        printf("Dati numele elevului %d: ",i+1);
        fgets(v[i].name,m,stdin);
        printf("Dati prima nota a elevuiui %s: ",v[i].name);
        scanf("%d",&v[i].grade[0]);
        printf("Dati cea de a doua nota a elevului %s: ",v[i].name);
        scanf("%d",&v[i].grade[1]);
        a[i]=medie(v[i].grade[0],v[i].grade[1]);
    }
    for(int j=0; j<n; j++)
        for(int i=0; i<n; i++)
            if(a[j]<a[i])
            {
                aux=v[j];
                v[j]=v[i];
                v[i]=aux;
            }
        for(int i=0;i<n;i++)
            v[i].name[strlen(v[i].name)-2]='\0';
    printf("Dupa ordonare lista elevilor este:");
    for(int i=0;i<n;i++)
        printf(" \nElevul numarul: %d;\n Numele elevului este: %s;\n Prima nota a elevului este: %d;\n A doua nota este: %d;",i+1,v[i].name,v[i].grade[0],v[i].grade[1]);
    for(int i=0;i<n;i++)
    free(v[i].name);
    free(v);
    free(a);
    return 0;
}
