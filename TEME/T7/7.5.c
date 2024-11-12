#include<stdio.h>
#include<stdlib.h>
#ifndef __GNUC__
exit("Compilator necorespunzator");
#endif
#ifndef _ENDIAN__
   #define F {\
         void f(unsigned char *v) {\
         for(int i=3;i>=0;i--)\
         printf("%d",v[i]);}\
         }
#else #define  F {\
         void f(wunsigned char *v) {\
         for(int i=0;i<4;i++)\
         printf("%d",v[i]);}\
          }
#endif
int main()
{
   F;
   return 0;
}
