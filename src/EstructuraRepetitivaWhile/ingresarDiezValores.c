/*Desarrollar un programa que permita la carga de 10 valores por 
teclado y nos muestre posteriormente la suma de los valores ingresados 
y su promedio.
*/

#include<stdio.h>
#include<conio.h>

int valores = 0;
float num, suma, promedio = 0;
int main()
{
    while(valores <10)
    {
        printf("Digitar numero \n");
        scanf("%f", &num);
        suma = num + suma;
        valores = valores + 1;
    }
    promedio = suma/10;
    printf("\n Suma de los valores ingresados %.1f", suma);
    printf("\n Promedio de los valores ingresados %.1f ", promedio);
    getch();
    return 0;
}