
#include <stdio.h>
 
#define MAX(a,b)    ((a)>(b)?(a):(b))
 int maxi(int a,int b)
{
    return a<b?a:b;
}
#define CITIRE(TEXT,P,VAR) {prinf("Dati variabila"TEXT":");scanf("%" $P,&VAR);}
int main()
{
    int a,b,c;
    CITIRE(a,d,a);
    CITIRE(b,d,b);
    CITIRE(c,d,c);
    printf("%d\n",maxi(maxi(a,b),maxi(b,c));
    return 0;
}