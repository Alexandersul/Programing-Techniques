
#include <stdio.h>

#define FN_MAX(TIP)\
int maxi_##TIP(TIP a,TIP b)\
{\
   return a>b?a:b;\
}
FN_MAX(int)
#define CITIRE1(TEXT,P,VAR)	{printf(TEXT ": ");scanf("%" #P, &VAR);}
int main()
{
    int a,b,c;
    CITIRE1("Dati a",d,a);
    CITIRE1("Dati a",d,b);
    CITIRE1("Dati a",d,c);
    printf("%d\n",maxi_int(maxi_int(a,b),maxi_int(b,c)));
    return 0;
}
