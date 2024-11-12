#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#ifdef IMPLICIT
    #define float abs_real(val) {\
    return(fabs(v));
#elsedefine float abs_real(val) {\
    if(v<0) \
    return -1*v; \
    else \
    return v;}
#endif
float abs_real(double v)
{}
int main()
{
    double v;
    printf("Dati variabila v");
    scanf("%d",&v);
    abs_real(v);
}



