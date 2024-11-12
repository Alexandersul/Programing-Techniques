#include <stdio.h>

int f1(int a,int b)
{
    return a+b;
}

int f2(int a,int b)
{
    return a-b;
}

int pozitiv(int e)
{
    return e>=0;
}

int par(int e)
{
    return e%2==0;
}


int testare(int *v,int n,int(*cond)(int))
{
    int i;
    for(i=0;i<n;i++){
        if(!cond(v[i]))return 0;
        }
    return 1;
}


int main(void)
{
    int a,b;
    printf("Dati a: ");
    scanf("%d",&a);
    printf("Dati b: ");
    scanf("%d",&b);
    int (*pf)(int,int);
    pf=&f1;
    printf("op(%d,%d)=>%d\n",a,b,(*pf)(a,b));
    pf=&f2;
    printf("op(%d,%d)=>%d\n",a,b,(*pf)(a,b));
    int v[5]={4,8,1,2,0};
    printf("toate elementele sunt pozitive: %d\n",testare(v,5,pozitiv));
    printf("toate elementele sunt pare: %d\n",testare(v,5,par));
    return 0;
}
