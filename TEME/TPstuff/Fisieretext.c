#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fis;
    char *a,c=0;
    char oldName[100]="outy.txt",oldName2[100]="outy.txt", newName[100]="outy.txt";
        if((fis=fopen(oldName,"r"))==NULL)
    {
        if((fis=fopen(oldName,"w"))==NULL)
    {
        printf("Eroare deschidere fisier");
        exit(1);
    }
    }
    fprintf(fis,oldName,strlen(oldName));
    fclose(fis);
    if((fis=fopen(oldName,"r"))==NULL)
    {
        if((fis=fopen(oldName,"w"))==NULL)
    {
        printf("Eroare deschidere fisier");
        exit(1);
    }
    }
    a=(char*)malloc(sizeof(char)*2);
    if(a==NULL)
    {
        printf("EROARE");
        exit(1);
    }
    a[1]=NULL;
    while(c!=strlen(newName))
    {
    fgets(a,2,fis);
    printf("%s ",a);
    c++;
    }
    printf("\nEnter new file path: ");
    scanf("%s", newName);
    if (rename(oldName2, newName) == 0)
    {
        printf("File renamed successfully.\n");
    }
    else
    {
        printf("Unable to rename files. Please check files exist and you have permissions to modify files.\n");
    }
    return 0;
}
