#include <stdio.h>

enum fructe{mere,pere};
int main()
{
    enum fructe *f;
    int a;
    printf("Pnetru mere apasati 0,pentru pere apasati 1: ");
    scanf("%d",&f);
    if(f==0)
    {
    printf("Danti nr mere: ");
    scanf("%d",&a);
    printf("Aveti: %d mere",a);
    }
    else
    {
    printf("Danti nr pere: ");
    scanf("%d",&a);
    printf("Aveti: %d pere",a);
    }
    return 0;
}
