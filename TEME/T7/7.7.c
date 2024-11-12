#include<stdio.h>
#include<stdlib.h>
int sterge(int *v1,int n1,int *v2,int n2)
{
    for(int i=0;i<n1;i++)
        for(int j=0;j<n2;j++)
        if(v1[i]==v2[j])
    {
        for(int k=i;i<n1;i++)
        v1[k]=v1[k+1];
        n1--;
        v1=realloc(v1,n1*sizeof(int));
    }
    return n1;
}
int main()

{
    int *v1,*v2,n1,n2;
    printf("Dati nr elemente al primului vector: ");
    scanf("%d",&n1);
    v1=(int*)malloc(n1*sizeof(int));
    if(v1==NULL)
    {
        printf("EROARE MEMORIE");
        exit(1);
    }
    printf("Dati nr elemente al vectorului numarul 2 vector: ");
    scanf("%d",&n2);
    v2=(int*)malloc(n2*sizeof(int));
    if(v2==NULL)
    {
        printf("EROARE MEMORIE");
        exit(1);
    }
    printf("Dati elementele vectorului v1:");
    for(int i;i<n1;i++)
    {
    scanf("%d",&v1[i]);
    }
        printf("Dati elementele vectorului v2:");
    for(int i;i<n2;i++)
    {
    scanf("%d",&v2[i]);
    }
    printf("%d",sterge(v1,n1,v2,n2));
    free(v1);
    free(v2);
    return 0;
}
