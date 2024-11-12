#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Rand{
    char text[1000];
    struct Rand *pred;
    struct Rand *urm;
    struct Rand *prim;
    struct Rand *ultim;
    }Rand;
Rand *m(Rand *c)
{
    Rand *c1=c;
        int c2=0;
        for(;c1;c1=c1->urm)
            c2+=1;
            return c2;
}
Rand *i(Rand *c)
{
    Rand *p;
    Rand *c1=c;
    int c2=0,c3=0;
    p->prim=c;
    c3=m(c1);
    for(;c1;c1=c1->urm)
        {
            c2++;
            if(c2==c3)
                    p->ultim=c1;
        }
        return p;
}
Rand *n(char *t,Rand *c1,Rand *c2)
{
    c1->urm=c2;
    c2->pred=c1;
    strcpy(c2->text,t);
    c2->urm=NULL;
    return c1;
}
Rand *alf(int s,int f,Rand *c)
{
    int i,j;
    char aux[1];
    Rand *c1=c;
    while(c1->text[i]!=NULL)
    {
        for(i=s;i<f;i++)
        for(j=s;j<f;j++)
    if(c1->text[i]>c1->text[j])
    {
        aux[0]=c1->text[i];
        c1->text[i]=c->text[j];
        c1->text[j]=aux[0];
    }
    c1=c1->urm;
    }
    return c;
}
Rand *r(Rand *c)
{
    int b;
    Rand *c1=c,*c2=c->urm;
    b=strlen(c->text);
    while(c1->urm!=NULL)
    {
    c1=alf(0,b,c1);
    c1=c1->urm;
    b=strlen(c2->text);
    }
    return c;
}
Rand *o(Rand *c)
{
    char *a,aux1[1],aux2[1000];
    Rand *c1=c,*c2=c->urm;
    int i,n=m(c);
    *a=(char*)malloc(sizeof(char)*n);
    c1=r(c);
    for(;c1;c1=c1->urm)
        for(i=0;i<=n;i++)
        a[i]=c1->text[0];
    c1=c;
    for(i=0;i<n;i++)
    for(int j=i+1;i<n;j++)
        if(a[i]<a[j])
    {
        aux1[0]=a[j];
        a[j]=a[i];
        a[i]=aux1[0];
        strcpy(aux2,c2->text);
        strcpy(c2->text,c1->text);
        strcpy(c1->text,aux2);
        c1=c2;
        c2=c2->urm;
    }
    return c;
}
Rand *l(char *t,Rand *c1,Rand *c2)
{
    Rand *c3;
    c3=n(t,c1,c2);
    c3=o(c3);
    c3=i(c3);
    return c3;
}
int main(char *f)
{
    char t[1000];
    char c3[1];
    int n,z=1,k=0,c=0;
    Rand *c1,*c2,*p,*a;
    c1=(Rand*)malloc(sizeof(Rand));
    if(c1==NULL)
    {
        printf("Eroare memorie");
        exit(1);
    }
    c2=(Rand*)malloc(sizeof(Rand));
    if(c2==NULL)
    {
        printf("Eroare memorie");
        exit(1);
    }
    fopen(f,r);
    while(c3!=EOF)
    {
       while(k<1000)
    {
        fscanf(f,"%s",&c3);
        t[k]=c3[0];
        k++;
    }
    if(z==1)
        {
            strcpy(c1->text,t);
            c1->pred=NULL;
            c1->urm=NULL;
            z--;
            c++;
        }
        else
        { l(t,c1,c2); c++; }
        fscanf(f,"%s",&c3);
        k=0;
    }
    p=i(c1);
    for(int i=0;i<c;i++)
    {
        printf("%s",a->text);
        a=a->urm;
    }
    free(c1);
    free(c2);
return 0;
}
