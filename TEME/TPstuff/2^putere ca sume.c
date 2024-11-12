#include<stdio.h>

int main()
{
    int x,s1=1;
    printf("Dati un numar: ");
    scanf("%d",&x);
    while(x!=0)
    {
    s1=s1+(s1+1);
    printf("\nAstea e : %d",s1);
    x--;
    }
return 0;
}
