#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
float allocVec(int n,...)
{
    int i=n,d=i-n;
    va_list va;
    (double)va=(float *)malloc(n*sizeof(float));
    if(va==NULL)
    {
        printf("Eroare la alocare");
        eixt(1);
    }
    while(n!=0)
    {
    printf("Dati elementul %d al vectorului:",d);
    scanf("%g",(double)&va[d]);
    n--;
    }
    return &va;
}
int main()
{
    int n;
    float *v;
    printf("Dati numarul de elemente al vectorului: ");
    scanf("%d",&n)
    allocVec(n,v);
    for(int i=0;i<n;i++)
    {
        printf(v[i]);
    }
    return 0;
}
