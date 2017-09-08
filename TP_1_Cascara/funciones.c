#include <stdio.h>
#include <stdlib.h>





float hacer_suma(float a,float b)
{
    return a + b;
}

float hacer_resta(float a,float b)
{
    return a - b;
}

float hacer_division(float a, float b)
{

    return a / b;
}

float hacer_multiplicacion(float a,float b)
{
    return a * b;
}

long long int hacer_factorial(float a)
{

int aux;
long long int total=1;

    for (aux=a;aux>1;aux--)
        {
        total= total * aux;

        }
return total;
}

