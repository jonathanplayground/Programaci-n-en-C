/*Escribir un programa que lea n números enteros y calcule la cantidad 
de valores mayores o iguales a 1000.
Este tipo de problemas también se puede resolver empleando la estructura repetitiva for. 
Lo primero que se hace es cargar una variable que indique la cantidad de valores a ingresar. 
Dicha variable se carga antes de entrar a la estructura repetitiva for.
La estructura for permite que el valor inicial o final dependa de una variable cargada 
previamente por teclado.
*/

#include<stdio.h>
#include<conio.h>

int n;
int limite = 1000;
float valorar;
int mayorIgual = 0;

int main()
{
    printf("calculo de valores mayores o iguales a 1000 \n");
    printf("Digitar la cantidad de numeros que requiere analizar: ");
    scanf("%i", &n);

    for(int i = 1; i<=n; i++)
    {
        printf("Digitar el %i", i);
        printf(" valor \n");
        scanf("%f", &valorar);

        if(valorar >= limite)
        {
            mayorIgual = mayorIgual + 1;
        }
    }
    printf("La cantidad de valores mayores o mejores de mil son: %i", mayorIgual);
    getch();
    return 0;
}