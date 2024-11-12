#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define FN_SORTATE(TIP)\
TIP sortare(TIP *v)\
{\
int aux;\
for(int i=0;i<v[0];i++)\
for(int j=i+1;j<v[0];j++)\
if(v[i]>v[j])\
{\
aux=v[i];\
v[i]=v[j];\
v[j]=aux;\
}\
}
int main()
{
    int x;
    printf("Pentru tipul int apasati 1; 2 pentru float, 3 pentru double, 4 pentru char,5 pentru unsigned");
    scanf("%d",&x);
    if(x==1)
        FN_SORTATE(int);
    else if(x==2)
        FN_SORTATE(float);
    else if(x==3)
        FN_SORTATE(double);
    else if(x==4)
        FN_SORTATE(char);
    else if(x==5)
        FN_SORTATE(unsigned);
    else printf("Valoare necorespunzatoare you fool")
    return 0;
}
