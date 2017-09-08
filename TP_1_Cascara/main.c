#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int es_positivo(float a);
int es_decimal(float a);
float ingresar_numero();
float hacer_suma( float x, float y);
float hacer_resta(float x, float y);
float hacer_division(float x, float y);
float hacer_multiplicacion(float x, float y);
long long int hacer_factorial(float x);


int main()
{
    char seguir='s';
    int opcion=0;
    float a;
    int decimal;
    int positivo;
    float b;
    float resultado;
    float resultado_division;
    float x=0.00;
    float y=0.00;
    char respuesta;




    while(seguir=='s')
    {

		printf("\n         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
		printf("\n         บ               :: C A L C U L A D O R A ::                 บ");
		printf("\n         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
        printf("\nBIEVENIDOS A LA CALCULADORA !!\n\n");
        printf("\n1- Ingresar 1er operando (A)=%.2f ", x );
        printf("\n2- Ingresar 2do operando (B)=%.2f", y);
        printf("\n3- Calcular la suma (A)=%.2f y (B)=%.2f", x, y);
        printf("\n4- Calcular la resta (A)=%.2f y (B)=%.2f", x, y);
        printf("\n5- Calcular la division (A)=%.2f y (B)=%.2f", x, y);
        printf("\n6- Calcular la multiplicacion (A)=%.2f y (B)=%.2f", x, y);
        printf("\n7- Calcular el factorial (A!)=%.2f ", x);
        printf("\n8- Calcular todas las operacione\n");
        printf("\n9- Salir\n");

        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {
            case 1:

                a= ingresar_numero();
                x=a;

                break;
            case 2:
                b= ingresar_numero();
                y=b;


                break;
            case 3:

            resultado= hacer_suma(a,b);
            printf("La suma es %.2f: \n ", resultado);
            x=0.00;
            y=0.00;
              printf("\nDesea continuar?: s o n " );
                respuesta=getche();
                if (respuesta=='n')
                {

                seguir = 'n';

                }
                 system("cls");

                break;
            case 4:
                resultado= hacer_resta(a,b);
                printf("La resta es %.2f:\n ", resultado);
                x=0.00;
                y=0.00;
                printf("\nDesea continuar?: s o n " );
                respuesta=getche();
                if (respuesta=='n')
                {

                seguir = 'n';

                }

                system("cls");

                break;
            case 5:
                while (b==0)
                {
                    printf("\nError, ingrese un numero valido que no sea 0 para poder dividir el numero A: ");
                    scanf("%f", &b);
                }
                resultado_division= hacer_division(a,b);
                printf("La division entre (A)=%f y (B)=%f es %.2f:\n  ",a, b, resultado_division);
                x=0.00;
                y=0.00;
                printf("\nDesea continuar?: s o n " );
                respuesta=getche();
                if (respuesta=='n')
              {

              seguir = 'n';

              }
                system("cls");

                break;
            case 6:
                resultado= hacer_multiplicacion(a,b);
                printf("La multiplicacion es %.2f:\n ", resultado);
                x=0.00;
                y=0.00;
                printf("\nDesea continuar?: s o n " );
                respuesta=getche();
                if (respuesta=='n')
                {

                seguir = 'n';

                }
                system("cls");

                break;
            case 7:

                decimal= es_decimal(a); // A LA VARIABLE DECIMAL LE ASIGNO LA FUNCION QUE COMPRUEBA QUE SEA O NO DECIMAL
                    while (decimal==1)
                    {

                        printf("Ingrese un numero que no sea decimal: ");
                        scanf("%f", &a);
                        decimal= es_decimal(a);
                    }
                    positivo= es_positivo(a);
                     while (positivo==0)
                    {
                        printf("\nIngrese un numero positivo: ");
                        scanf("%f", &a);
                        positivo= es_positivo(a);
                    }


                resultado= hacer_factorial(a);
                printf("El factorial de %.2f es %.2f:", a, resultado);
                x=0.00;
                y=0.00;
                printf("\nDesea continuar?: s o n " );
                respuesta=getche();
                if (respuesta=='n')
                {

                seguir = 'n';

                }
                system("cls");

                break;
            case 8:
                resultado= hacer_suma(a,b);
                printf("La suma es %.2f:\n ", resultado);
                resultado= hacer_resta(a,b);
                printf("La resta es %.2f:\n ", resultado);
                resultado_division= hacer_division(a,b);
                printf("La division entre (A)=%.2f y (B)=%.2f es %.2f:\n  ",a, b, resultado_division);
                resultado= hacer_multiplicacion(a,b);
                printf("La multiplicacion es %.2f:\n ", resultado);
                resultado= hacer_factorial(a);
                printf("El factorial de %f es %lf:", a, resultado);
                x=0.00;
                y=0.00;
                printf("\nDesea continuar?: s o n " );
                respuesta=getche();
                if (respuesta=='n')
                {

                seguir = 'n';

                }


                break;
            case 9:
                seguir = 'n';
                break;

        }

    }
    return 0;
}
float ingresar_numero()
    {
    float x;

    printf("\nNumero: ");
    scanf("%f", &x);

    return  x;
    }

    int es_decimal(float a)
{
    int flag=0; // VARIABLE INICIALIDADA PARA DAR VALOR BOOLEANO

    int a_entero = (int) a; // PARSEO EL NUMERO A INT.

    if(a - a_entero)
    {

    flag=1;
    }


    return flag;
}

int es_positivo( float a)
{

   int flag;

   if (a>0)
   {
       flag=1;
   }
   else
   {
       flag=0;
   }

   return flag;

}


