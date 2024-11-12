#include <stdio.h>

#define MAX(a,b)    ((a)>(b)?(a):(b))
#define CITIRE1(TEXT,P,VAR)	{printf(TEXT ": ");scanf("%" #P, &VAR);}
int main()
{
    int a,b,c;
    CITIRE1("Dati a",d,a);
    CITIRE1("Dati a",d,b);
    CITIRE1("Dati a",d,c);
    printf("%d\n",MAX(MAX(a,b),MAX(b,c)));
    return 0;
}
