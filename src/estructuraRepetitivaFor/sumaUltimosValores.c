/*Desarrollar un programa que solicite la carga de 10 números e 
imprima la suma de los últimos 5 valores ingresados
*/

#include<stdio.h>
#include<conio.h>

float suma, valor;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("Digitar el %i", i);
        printf(" valor: ");
        scanf("%f", &valor);

        if(i>5)
        {
            suma = valor + suma;
        }
    }
    printf("La suma de los ultimos 5 numeros es: %f", suma);
    getch();
    return 0;
}