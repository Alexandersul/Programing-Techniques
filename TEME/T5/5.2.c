#include<stdio.h>
#include<stdlib.h>
int main(char *f1,char *f2)
{
    FILE *fis1,*fis2;
    if((fis1=fopen(f1,"w"))==NULL){
        printf("EROARE FISIER\n");
        exit(1);
        }
    fclose(fis1);
    if((fis2=fopen(f2,"w"))==NULL){
        printf("EROARE FISIER\n");
        exit(1);
        }
    fclose(fis2);
    if((fis1=fopen(f1,"r"))==NULL){
        printf("EROARE FISIER\n");
        exit(1);
        }
    fclose(fis1);
    if((fis2=fopen(f2,"w"))==NULL){
        printf("EROARE FISIER\n");
        exit(1);
        }
    char *a;
    a=(char*)malloc(4096*sizeof(char));
    if(a==NULL)
    {
        printf("EROARE MEMORIE\n");
        exit(1);
    }
    a[4096]=NULL;
    while(a!='EOF')
{
    fgets(a,4096,fis1);
    fwrite(a,8,4096,fis2);
}
return 0;}
