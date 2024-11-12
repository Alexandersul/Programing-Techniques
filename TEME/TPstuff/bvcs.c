#include <stdio.h>
#include <stdlib.h>

#define FN_CAUT(TIP)    				\
    int caut_##TIP(const TIP *p,int n,TIP e)    		\
    {   							\
        for( ; n ; n--, p++ ){   				\
            if(*p==e)return 1;  				\
            }   						\
        return 0;   					\
    }

FN_CAUT(int)
FN_CAUT(double)

int main()
{
    int vi[]={7,0,-1,3,2};
    printf("%d\n",caut_int(vi,5,8));     // => 0

    double vf[]={3.14,9,0.5,-1.2e3};
    printf("%d\n",caut_double(vf,4,-1200));     // => 1

    return 0;
}
