#include <stdio.h>
#include<stdlib.h>
int main ()
{
    FILE*fis;
    char oldName,newName[100];
    printf("Dati numele fisierului: ");
    scanf("%s", newName);
    /**if((fis=fopen(oldName,"r"))==NULL)
    {
        printf("EROARE");
        exit(1);
    }
    fprintf(fis,"%s",oldName);*/
    rename(oldName,newName);
        if (rename(oldName, newName) == 0)
    {
        printf("File renamed successfully.\n");
    }
    else
    {
        printf("Unable to rename files. Please check files exist and you have permissions to modify files.\n");
    }
    return(0);
}
