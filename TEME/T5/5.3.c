#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,m,n,b,i,j,*v,x;
    char *z;
    FILE *fis;
    printf("Dati valoarea lui m: ");
    scanf("%d",&m);
    printf("Dati valoarea lui n: ");
    scanf("%d",&n);
    a=(int**)malloc(n*m*sizeof(int*));
    if(a==NULL)
    {
        printf("EROARE MEMORIE");
        exit(1);
    }
    for(i=0; i<m; i++)
    {
        a[i]=(int*)malloc(n*sizeof(int));
        if(a[i]==NULL)
        {
            printf("EROARE MEMORIE");
            exit(1);
        }
    }
    printf("Dati elementele matricii: ");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    if((fis=fopen("fisier.txt","w"))==NULL)
    {
        printf("EROARE FISIER\n");
        exit(1);
    }
    x=2;
    v=(int*)malloc(x*sizeof(int));
    if(v==NULL)
    {
        printf("EROARE FISIER\n");
        exit(1);
    }
    v[0]=m;
    v[1]=n;
    fwrite(v,sizeof(int),x,fis);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            fwrite(a[i],sizeof(int),m,fis);
        }
    fclose(fis);
    if((fis=fopen("fisier.txt","r"))==NULL)
    {
        printf("EROARE FISIER\n");
        exit(1);
    }
    z=(char*)malloc(x*sizeof(char));
    z[1]=NULL;
    for(i=0; i<m*n; i++)
    {
        fgets(z,x-1,fis);
        b=z[1]-'0';
        printf("%d ",b);
    }
    free(z);
    free(v);
    for(i=1;i<m;i++)
        free(a[i]);
    free(a);
    fclose(fis);
    return 0;
}
