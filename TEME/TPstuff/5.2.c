#include <string.h>
#include <stdio.h>
#define VECTOR(TIP)\
typedef struct {\
 TIP x;\
 }Vector_##TIP;\
int FN_SORTARE_##TIP(Vector_##TIP *v,int n) \
{\
Vector_int aux;\
for(int i=0;i<n;i++)\
for(int j=i+1;j<n;j++)\
if(v[i]>v[j])\
{\
aux=v[i];\
v[i]=v[j];\
v[j]=aux;\
}\
}
VECTOR(int)
int main(char tip)
{
    int s=FN_SORTARE_int(tip);
    printf("%d",s);
}
