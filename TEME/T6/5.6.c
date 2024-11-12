#include <stdio.h>
#include <stdlib.h>

#define PUNCT(TIP)\
typedef struct {\
 TIP x;\
 TIP y;\
}Punct_##TIP;\
int distanta_##TIP(Punct_##TIP *a)\
{\
      return sqrt(a->x*a->x+a->y*a->y);\
}
PUNCT(int)

int main()
{
   Punct_int v[5]={{1,3},{7,5},{0,0},{-2,4},{1,1}};
   int i,n=5;

    for(i=0;i<n;i++)
    {
         int d=distanta_int(v);
         printf("%d, %d, %d\n",v[i].x,v[i].y,d);
    }



    return 0;
}
