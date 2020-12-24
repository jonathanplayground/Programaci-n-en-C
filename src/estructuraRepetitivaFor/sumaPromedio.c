/* Desarrollar un programa que permita la carga de 10 valores por 
teclado y nos muestre posteriormente la suma de los valores ingresados 
y su promedio
*/

#include<stdio.h>
#include<conio.h>

int num;
int x = 10;
float promedio, suma = 0;

int main()
{
    for(int i=0; i<x; i++)
    {
        printf("Digitar el numero: \n ");
        scanf("%i", &num);
        suma = suma + num;
    }

    promedio = suma/x;
    printf("\n Sumatoria de numeros: %.1f", suma);
    printf("\n Promedio de numeros: %.2f", promedio);
    getch();
    return 0;
}