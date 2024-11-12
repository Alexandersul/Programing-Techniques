#include <stdio.h>

#define CITIRE1(TEXT,P,VAR)	{printf(TEXT ": ");scanf("%" #P, &VAR);}

int main()
{
    float kg;
    CITIRE1("Introduceti greutatea, intre 1 si 10 kg",g,kg)
    printf("greutatea=%g\n",kg);

    return 0;
}
