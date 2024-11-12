#include <stdio.h>

union zarie{
    int n;
    char *d;
};

int main(void)
{

    union zarie u;
    int x;
    printf("Apasati (1) daca lucrati cu cifre:\n");
    printf("Apasati (2) daca lucrati cu litere:\n");
    scanf("%d",&x);
    if(x==1)
    {
        printf("Dati cifra: ");
        scanf("%d",&u.n);
        printf("Cifra aleasa este: %d",u.n);
    }
    else
    {
        printf("Dati cuvantul: ");
        scanf("%s",&u.d);
        printf("Cuvantul ales este: %s",u.d);
    }
    return 0;
}
