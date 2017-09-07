#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int ingresar_numero();
int hacer_suma( int x, int y);
int hacer_resta(int x, int y);
float hacer_division(int x, int y);
int hacer_multiplicacion(int x, int y);
long long int hacer_factorial(int x);


int main()
{
    char seguir='s';
    int opcion=0;
    int a;
    int b;
    long int resultado;
    float resultado_division;
    int x=0.00;
    int y=0.00;
    char respuesta;



    while(seguir=='s')
    {

		printf("\n         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
		printf("\n         บ               :: C A L C U L A D O R A ::                 บ");
		printf("\n         ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน");
        printf("\nBIEVENIDOS A LA CALCULADORA !!\n\n");
        printf("\n1- Ingresar 1er operando (A)=%d ", x );
        printf("\n2- Ingresar 2do operando (B)=%d", y);
        printf("\n3- Calcular la suma (A)=%d y (B)=%d", x, y);
        printf("\n4- Calcular la resta (A)=%d y (B)=%d", x, y);
        printf("\n5- Calcular la division (A)=%d y (B)=%d", x, y);
        printf("\n6- Calcular la multiplicacion (A)=%d y (B)=%d", x, y);
        printf("\n7- Calcular el factorial (A!)=%d ", x);
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
            printf("La suma es %ld:\n ", resultado);
            x=0.00;
            y=0.00;
            printf("\nDesea continuar?: s o n\n " );
            respuesta=getche();
            if (respuesta=='n')
              {

              seguir = 'n';

              }

                break;
            case 4:
                resultado= hacer_resta(a,b);
                printf("La resta es %ld:\n ", resultado);
                x=0.00;
                y=0.00;
                printf("\nDesea continuar?: s o n \n" );
                respuesta=getche();
                if (respuesta=='n')
                {

                seguir = 'n';

                }



                break;
            case 5:
                while (b==0)
                {
                    printf("\nError, ingrese un numero valido que no sea 0 para poder dividir el numero %d: ", x);
                    scanf("%d", &b);
                }
                resultado_division= hacer_division(a,b);
                printf("La division entre (A)=%d y (B)=%d es %.2f:\n  ",a, b, resultado_division);
                x=0.00;
                y=0.00;
                printf("\nDesea continuar?: s o n \n" );
                respuesta=getche();
                if (respuesta=='n')
              {

              seguir = 'n';

              }


                break;
            case 6:
                resultado= hacer_multiplicacion(a,b);
                printf("La multiplicacion es %ld:\n ", resultado);
                x=0.00;
                y=0.00;
                printf("\nDesea continuar?: s o n \n" );
                respuesta=getche();
                if (respuesta=='n')
                {

                seguir = 'n';

                }


                break;
            case 7:
                resultado= hacer_factorial(a);
                printf("El factorial de %d es %ld:", a, resultado);
                x=0.00;
                y=0.00;
                printf("\nDesea continuar?: s o n \n" );
                respuesta=getche();
                if (respuesta=='n')
                {

                seguir = 'n';

                }
                system("cls");

                break;
            case 8:
                resultado= hacer_suma(a,b);
                printf("La suma es %ld:\n ", resultado);
                resultado= hacer_resta(a,b);
                printf("La resta es %ld:\n ", resultado);
                resultado_division= hacer_division(a,b);
                printf("La division entre (A)=%d y (B)=%d es %.2f:\n  ",a, b, resultado_division);
                resultado= hacer_multiplicacion(a,b);
                printf("La multiplicacion es %ld:\n ", resultado);
                resultado= hacer_factorial(a);
                printf("El factorial de %d es %ld:", a, resultado);
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
int ingresar_numero()
    {
    int x;

    printf("\nNumero: ");
    scanf("%d", &x);

    return  x;
    }



