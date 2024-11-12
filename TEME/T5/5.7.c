#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(char *n,char *o,char *v)
{
    FILE *fis;
    char *e;
    int x=2;
    int i,a=0,c=0,ba=16;
    if((fis=fopen(n,"r+"))==NULL)
    {
        printf("EROARE FISIER\n");
        exit(1);
    }
    fclose(fis);
    for(i=0; i<strlen(o); i++)
    {
        if(o[i]==' ')
            i=strlen(v)+1;
        else if(o[i]=='a'||o[i]=='A')
            a=pow(ba,strlen(n)-i-1)*10;
        else if(o[i]=='b'||o[i]=='B')
            a=pow(ba,strlen(n)-i-1)*11;
        else if(o[i]=='c'||o[i]=='C')
            a=pow(ba,strlen(n)-i-1)*12;
        else if(o[i]=='d'||o[i]=='D')
            a=pow(ba,strlen(n)-i-1)*13;
        else if(o[i]=='e'||o[i]=='E')
            a=pow(ba,strlen(n)-i-1)*14;
        else if(o[i]=='f'||o[i]=='F')
            a=pow(ba,strlen(n)-i-1)*15;
        else
            a=pow(ba,strlen(n)-i-1)*(o[i]-'0');
    }
    for(i=0; i<strlen(v); i++)
        if(v[i]==' ')
            c++;
    e=(char*)malloc(x*sizeof(char*));
    if(e==NULL)
    {
        printf("EROARE MEMORIE");
        exit(1);
    }
    e[1]=NULL;
    for(i=0;i<=a;i++)
    fgets(e,x,fis);
    fwrite(v,sizeof(char),strlen(v)-c-1,fis);
    return 0;
}
