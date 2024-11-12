#include <stdio.h>
 
#define CITIRE(TEXT,P,VAR,NR1,NR2)  
{
while((((VAR)>=(NR1)&&(VAR)<=(NR2))?))
{
printf(TEXT ": ");
scanf("%" #P, &VAR);
}
}
int main(char *t,char *p,char *v,int a,int b)
{
    CITIRE(t,p,v,a,b);    
    return 0;
}
