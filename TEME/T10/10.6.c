#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct prd
{
    char *n;
    float v;
    struct prd *nxt;
    struct prd *bak;
} prd;
typedef struct cat
{
    char *den;
    struct prd *l;
    struct cat *pre;
    struct cat *urm;
    struct cat *lst;
    struct cat *frs;
    struct cat *prm;
    struct cat *ult;
} cat;
int m(cat *c,int a)
{
    cat*c1=c;
    int c2=0;
    if(a==0)
    {
        for(; c1->l; c1->l=c1->l->nxt)
            c2+=1;
        return c2;
    }
    else if(a==1)
    {
        for(; c1; c1=c1->urm)
            c2+=1;
        return c2;
    }
}
cat *i(cat *c,int a)
{
    cat *p1;
    cat *p2,*c2=c,*c1;
    int c3=0,c4=0;
    if(a==1)
    {
        p1->prm=c;
        c4=m(c4,a);
        for(; c1; c1=c1->urm);
        {
            c3++;
            if(c3==c4)
                p1->ult=c1;
        }
        return p1;
    }
    else if(a==0)
    {
        p2->frs=c->l;
        c4=m(c->l,a);
        for(; c2; c2=c2->urm)
        {
            c3++;
            if(c3==c4)
                p2->lst=c->l;
        }
        return p2;
    }
}
cat *add(char *t,cat *c1,prd *c2,int a,int b)
{
    if(a==1)
    {
        c1->urm=c2;
        c2->bak=c1;
        strcpy(c2->n,t);
        c2->nxt=NULL;
        return c2;
    }
    else if(a==0)
    {
        c1->l->nxt=c2->bak;
        c2->bak=c1->l->nxt;
        c2->v=b;
        strcpy(c2->n,t);
        c2->nxt=NULL;
        return c2;
    }
}
cat *n(char *t,cat *c1,char *c2,int a)
{
    c1->l=c2;
    strcpy(c1->den,c2);
    c1->l->bak=NULL;
    c1->l->nxt=NULL;
    c1->l->v=a;
    return c1;
}
void *see(cat *c1,int a)
{
    if(a==0)
    {
        for(;c1->l;c1->l=c1->l->nxt)
        printf("%s",c1->l->n);
    }
    else if(a==1)
    {
        for(;c1;c1=c1->urm)
            printf("%s",c1->den);
    }
}
int main()
{
    char t1[100],t2[100];
    int k,r1=1,r2=1,x,r=0;
    cat *c1,*c2=c1->urm;
    prd *p;
    c1=(cat*)malloc(sizeof(cat));
    if(c1==NULL)
    {
        printf("Eroare memorie");
        exit(1);
    }
    c1->l=p;
    c1->den=(char*)malloc(sizeof(char));
    if(c1->den==NULL)
    {
        printf("Eroare memorie");
        exit(1);
    }
    c2=(cat*)malloc(sizeof(cat));
       if(c2==NULL)
    {
        printf("Eroare memorie");
        exit(1);
    }
    c2->den=(char*)malloc(sizeof(char));
    if(c2->den==NULL)
    {
        printf("Eroare memorie");
        exit(1);
    }
    printf("/tMeniu/n1-adaua ategorie/t2-adauga produs/t3-afisare categorii/t4-afisare prduse/t5-iesire");
    scanf("%d",&k);
    while(r==0)
    switch(k)
    {
        case 1:
        printf("Dati numele categoriei: ");
        if(r1==1)
        {
            scanf("%s",&t1);
            strcpy(c1->den,&t1);
            i(c1,1);
            r1--;
        }
        else
        {
            scanf("%s",&t1);
            add(t1,c1,c2,1,0);
            i(c1,1);
        }
        break;
        case 2:
            printf("Dati denumirea produsului: ");
            scanf("%s",&t1);
            printf("Dati valoarea produsului: ");
            scanf("%d",&x);
            printf("Dati categria din care face parte: ");
            scanf("%s",&t2);
            cat *c10=c1;
            for(;c10;c10=c10->urm)
            if(strstr(c10->den,t2))
            {
                if(r2==1)
            {

            {
                c10=n(t1,c10,c10->l->n,x);
                i(c1,0);
                break;
            }
            r2--;
            }
            else
            {
                add(t1,c10,c10->l,0,x);
                i(c1,0);
                break;
            }
            }
        break;
        case 3:
        see(c1,1);
        break;
        case 4:
        see(c1,0);
        case 5:
            exit(1);
        break;
    }
    return 0;
}
