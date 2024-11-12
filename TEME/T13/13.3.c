#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,*a,v,x,s1=0,s2=0,*u,c=0;
    printf("Dati n: ");
    scanf("%d",&n);
    a=(int*)malloc((n*sizeof(int)));
    if(a==NULL)
    {
        printf("Eroare ");
        exit(1);
    }
    for(int i=0; i<n; i++)
        a[i]=0;
    printf("Dati volumele obiectelor: ");
    m=n;
    for(int i=0; i<m; i++)
    {
        scanf("%d",&x);
        if(x<=n)
            a[x-1]++;
        else if(x>n)
        {
            a=realloc(a,x*sizeof(int));
            for(int j=n; j<=x; j++)
                a[j]=0;
            a[x-1]++;
            n=x;
        }
    }
    u=(int*)malloc((n*sizeof(int)));
    if(u==NULL)
    {
        printf("Eroare ");
        exit(1);
    }
    for(int i=0; i<n; i++)
        u[i]=0;
    printf("Dati volumul: ");
    scanf("%d",&v);
    for(int i=1; i<=n; i++)
    {
        if(a[i]>0&&s1+i<v)
              {
                  s1+=i;
                  u[i-1]++;
                  c++;
              }
        if(a[i]>0)
            s2+=i;
    }
    int pp=1;
    if(s1==s2)
    {
    printf("\nObiectele folosite pentru umplere sunt:\n");
    for(int i=0; i<n; i++)
        if(u[i]>0&&c!=0)
        {
            if(pp==1)
            {
                printf("Volumul obiectului %d",i+1);
                c--;
                pp--;
            }
            else
            {
                printf(" + Volumul obiectului %d",i+1);
                c--;
            }
        }
    }
    else if(s1!=s2)
    {
        printf("Obiectele folosite pentru umplere sunt:\n");
        for(int i=1; i<n; i++)
        if(u[i]>0&&c!=0)
        {
            if(pp==1)
            {
                printf("Volumul obiectului %d",i);
                c--;
                pp--;
            }
            else
            {
                printf(" + Volumul obiectului %d",i);
                c--;
            }
        }
        printf(" + Volumul obiectului %d",s2-s1);
    }
    return 0;
}
