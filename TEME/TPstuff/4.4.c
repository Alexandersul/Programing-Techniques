#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    FILE *fis;
    char *s,*j,*b,*t,c[]="in.txt";
    int n,m,x=2,y=2,i=1;
    printf("Dati dimensiunea numelui fisierului: ");
    scanf("%d",&n);
    n++;
    s=(char*)malloc(n*sizeof(char));
    if(s==NULL)
    {
        printf(fis,"EROARE");
        exit(1);
    }
    getchar();
    printf("Dati numele fisierului: ");
    fgets(&s,n,stdin);
    if((fis=fopen(c,"r"))==NULL)
    {
        if((fis=fopen(c,"w"))==NULL)
    {
        printf("Eroare deschidere fisier");
        exit(1);
    }
    }
    rename(c,s);
    printf("Dati lungimea primului cuvant: ");
    scanf("%d",&n);
    getchar();
    n++;
    s=(char*)malloc(n*sizeof(char));
    if(s==NULL)
    {
        printf(fis,"EROARE");
        exit(1);
    }
    printf("Dati cuvantul: ");
    fgets(&s,n,stdin);
    printf("Dati lungimea cuvantului secundar: ");
    scanf("%d",&m);
    getchar();
    m++;
    t=(char*)malloc(m*sizeof(char));
    if(t==NULL)
    {
        printf(fis,"EROARE");
        exit(1);
    }
    printf("Dati cuvantul: ");
    fgets(&t,m,stdin);
    char *a;
    a=(char*)malloc(x*sizeof(char));
    if(a==NULL)
    {
        printf(fis,"EROARE");
        exit(1);
    }
    a[1]=NULL;
    b=(char*)malloc(x*sizeof(char));
    if(b==NULL)
    {
        printf(fis,"EROARE");
        exit(1);
    }
    b[1]=NULL;
    while(b!=NULL)
    {
        fgets(&b,x,fis);
        if(b>='a'&&b<='z'||b>='A'&&b<='Z')
            a=realloc(a,sizeof(char)*(x+i));
            i++;
        if(a==NULL)
        {
            printf("EROARE");
             exit(1);
        }
        if(x==2)
            strcpy(a,b);
        else
        {
            strcat(a,b);
            a[strlen(a)]=NULL;
        }
        x++;
        if(strstr(a,s))
        {
            fclose(fis);
            if((fis=fopen(s,"r"))==NULL)
            {
                printf("Eroare deschidere fisier\n");
                exit(1);
            }
            j=(char*)malloc(y*sizeof(char));
            if(j==NULL)
            {
                printf("EROARE");
                exit(1);
            }
            j[1]=NULL;
            while(j[0]!=NULL)
            {
                fgets(&j[0],y,fis);
                printf("%s",j);
                j[0]=' ';
            }
        }
    }
    free(s);
    free(j);
    free(b);
    free(t);
    fclose(fis);
    return 0;
}
