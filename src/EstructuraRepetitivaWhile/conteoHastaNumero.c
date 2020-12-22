/*Escribir un programa que solicite la carga de un valor positivo y nos muestre 
desde 1 hasta el valor ingresado de uno en uno.
Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30
*/

#include<stdio.h>
#include<conio.h>

int num = 1;
int num1 = 0;


int main()
{
    printf("Digitar un numero: \n");
    scanf("%i", &num1);

    while(num <= num1)
    {
        printf("%i - ", num);
        num = num +1;
    }
    getch();
    return 0;
}