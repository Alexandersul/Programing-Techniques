#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    FILE *fis;
    char **a,*b,*c,*z;
    int n,d=2,i=1,j,k,l=0;
    z=(char*)malloc(sizeof(char)*d);
    if(z==NULL)
    {
        printf("EROARE");
        exit(1);
    }
    if((fis=fopen("fis.txt","w"))==NULL)
    {
        printf("Eroare deschidere fisier\n");
        exit(1);
    }
    fclose(fis);
    if((fis=fopen("fis.txt","r"))==NULL)
    {
        printf("Eroare deschidere fisier\n");
        exit(1);
    }
    b=(char*)malloc(d*sizeof(char));
    if(b==NULL)
    {
        printf("EROARE");
        exit(1);
    }
    b[1]=NULL;
    a=(char**)malloc(d*sizeof(char*));
    if(a==NULL)
    {
        printf("EROARE");
        exit(1);
    }
    c=(char*)malloc(d*sizeof(char));
    if(c==NULL)
    {
        printf("EROARE");
        exit(1);
    }
    c[1]=NULL;
    while(c!='EOF')
    {
        fgets(&c,d,fis);
        if(c!=' ')
        {
                if(d==2)
                    strcpy(a[i],c);
                else
                {
                    strcat(a[i],c);
                    a[i][strlen(a[i])]=NULL;
                }
                a[i]=realloc(a[i],sizeof(char*)*(d+i));
                if(a[i]==NULL)
                {
                    printf("EROARE");
                    exit(1);
                }
                b=realloc(b,sizeof(char)*d+i);
                if(b==NULL)
                {
                    printf("EROARE");
                    exit(1);
                }
                d++;
        }
    }
    for(i=0;i<d+1;i++)
        for(j=i+1;j<d+1;j++)
    {
            l=0;
        if(strstr(a[i],a[j]))
    {
        l++;
        z[1]=l+'0';
        for(k=i;k<d+1;k++)
            {
                strcpy(a[k],a[k+1]);
                a[i]=realloc(a[i],sizeof(char*)*(d-i+1));
                strcat(a[i],z);
            }
    }
    }
        free(b);
        free(c);
        free(z);
        for(j=0;j<d-i+1;j++)
        free(a[j]);
        free(a);
        fclose(fis);
        return 0;
    }
