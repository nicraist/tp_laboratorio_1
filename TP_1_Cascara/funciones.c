#include <stdio.h>
#include <stdlib.h>





int hacer_suma(int a,int b)
{
    return a + b;
}

int hacer_resta(int a,int b)
{
    return a - b;
}

float hacer_division(int a, int b)
{

    return ((float)a/(float)b);
}

int hacer_multiplicacion(int a,int b)
{
    return a * b;
}

long long int hacer_factorial(int a)
{

int aux;
int total=1;

    for (aux=a;aux>1;aux--)
        {
        total= total * aux;

        }
return total;
}

