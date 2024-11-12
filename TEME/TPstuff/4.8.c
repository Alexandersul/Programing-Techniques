#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(char *f1,char *f2,float c,int a,int b)
{
    FILE *fis1,*fis2;
    char *e,*f,*g,*h;
    int x=2,r=0,d,y=10,i=0,j=1;
    e=(char*)malloc(x*sizeof(char));
    {
        printf("EROARE MEMORIE");
        exit(1);
    }
    e[1]=NULL;
    f=(char*)malloc(x*sizeof(char));
    {
        printf("EROARE MEMORIE");
        exit(1);
    }
    f[1]=NULL;
    g=(char*)malloc(x*sizeof(char));
    {
        printf("EROARE MEMORIE");
        exit(1);
    }
    g[1]=NULL;
    if(e==NULL)
    {
        printf("EROARE MEMORIE");
        exit(1);
    }
    h=(char*)malloc(x*sizeof(char));
    {
        printf("EROARE MEMORIE");
        exit(1);
    }
    h[0]='/n';
    h[1]=NULL;
    if((fis1=fopen(f1,"w"))==NULL)
    {
        printf("Eroare deschidere fisier\n");
        exit(1);
    }
    fclose(fis1);
    if((fis2=fopen(f2,"w"))==NULL)
    {
        printf("Eroare deschidere fisier\n");
        exit(1);
    }
    fclose(fis2);
    if((fis1=fopen(f1,"r"))==NULL)
    {
        printf("Eroare deschidere fisier\n");
        exit(1);
    }
    fclose(fis1);
    if((fis2=fopen(f2,"w"))==NULL)
    {
        printf("Eroare deschidere fisier\n");
        exit(1);
    }
    fclose(fis2);
    while(e!='EOF')
    {
        fgets(e,x,fis1);
        if(e==',')
            r++;
        while(r==1)
        {
            fgets(e,x,fis1);
            d=d+(e[0]-'0')*pow(y,i);
            i++;
            if(e=='\n')
                r--;
        }
        if(d>=a&&d<=b)
        {
            fclose(fis1);
            d=d*c;
            while(d!=0)
            {
                g[1]=d%10;
                d=d/10;
                g=realloc(g,(x+j)*sizeof(char));
                if(g==NULL)
                {
                    printf("EROARE MEMORIE");
                    exit(1);
                }
                j++;
                g[strlen(g)]=NULL;
            }
        }
        if((fis1=fopen(f1,"r"))==NULL)
        {
            printf("Eroare deschidere fisier\n");
            exit(1);
        }
        while(f!=',')
            fgets(f,x,fis1);
        fwrite(g,strlen(g),x-1,fis2);
        fwrite(h,strlen(h),x-1,fis2);
    }
    free(e);
    free(f);
    free(f1);
    free(f2);
    free(g);
    free(h);
    fclose(fis1);
    fclose(fis2);
    return 0;
}
