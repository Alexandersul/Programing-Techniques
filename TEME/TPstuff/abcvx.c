#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    int n;
    struct NR *urm;
    struct NR *pr;
} nr;
nr *m(nr *c)
{
    nr *c1=c;
        int c2=0;
        for(;c1;c1=c1->urm)
            c2+=1;
            return c2;
}
nr *s(nr *c)
{
    nr *p;
    nr *c1=c;
    p->pr=c;
    return p;
}
nr *n(int z,nr *c1,nr *c2)
{
    c1->urm=c2;
    c2->n=z;
    c2->urm=NULL;
    return c2;
}
int main()
{
    nr *i,*j;
    int m,r,c=1;
    printf("Dati numarul de elemente al listei: ");
    scanf("%d",&m);
    printf("Dati primul element al listei: ");
    scanf("%d",&(i->n));
    j=s(i);
    printf("Dati elementele listei: ");
    for(int k=0;k<m;k++)
    {
    scanf("%d",&r);
    i->urm=(r,i,i->urm);
    i=i->urm;
    }
    i->urm=NULL;
    i=j;
    printf("Asta este lista: ");
    for(;i;i=i->urm)
    printf("%d",i->n);
    free(i);
    return 0;
}
