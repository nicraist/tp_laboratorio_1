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
    int valida_x=0;
    int valida_y=0;






    while(seguir=='s')
    {

		printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º               :: C A L C U L A D O R A ::                 º");
		printf("\n         ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
        printf("\nBIEVENIDOS A LA CALCULADORA !!\n\n");
          if (valida_x==0)
           {

                printf("\n1- Ingresar 1do operando (A)=x");
           }
           else
            {

            printf("\n2- Ingresar 2do operando (A)=%.2f", x);
            }

          if (valida_y==0)
           {

                printf("\n2- Ingresar 2do operando (B)=y");
           }
           else
            {

            printf("\n2- Ingresar 2do operando (B)=%.2f", y);
            }

        printf("\n3- Calcular la suma de (A) y de (B)");
        printf("\n4- Calcular la resta de (A) y de (B)");
        printf("\n5- Calcular la division entre (A) y (B)");
        printf("\n6- Calcular la multiplicacion de (A) y (B)");
        printf("\n7- Calcular el factorial (A!)");
        printf("\n8- Calcular todas las operaciones\n");
        printf("\n9- Salir\n");

        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {
            case 1:

                a= ingresar_numero();
                x=a;
                valida_x=1;


                break;
            case 2:
                b= ingresar_numero();
                y=b;
                valida_y=1;


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


