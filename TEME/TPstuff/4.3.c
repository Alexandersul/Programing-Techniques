#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    FILE *fis;
    char *s;
    int *v,i,c=0;
    if((fis=fopen("fisier.txt","w"))==NULL)
        {
            printf("Eroare deschidere fisier\n");
            exit(1);
        }
    fclose(fis);
    if((fis=fopen("fisier.txt","r+"))==NULL)
        {
            printf("Eroare deschidere fisier\n");
            exit(1);
        }
    s=(char*)malloc(2*sizeof(char));
    if(s==NULL)
    {
        fprintf(fis,"EROARE");
        exit(1);
    }
    v=(int*)malloc(1*sizeof(int));
    if(v==NULL)
    {
        fprintf(fis,"EROARE");
        exit(1);
    }
    s[1]=NULL;
    fgets(&s,2,fis);
    while(s[0]!='EOF')
    {
        tolower(s);
        v[s[0]]++;
        c++;
        v=realloc(v,sizeof(int)*(c+1));
        if(v==NULL)
        {
            printf("EROARE");
            exit(1);
        }
        fgets(&s,2,fis);
    }
    for( i=97;i<97+c;i++)
        {
            fprintf("Cifra: %c\n apare de: ",i+97);
            fprintf("%d ori",v[i]);
        }
    free(s);
    free(v);
    fclose(fis);
return 0;}
