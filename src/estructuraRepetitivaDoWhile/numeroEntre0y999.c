/*Escribir un programa que solicite la carga de un número entre 0 y 999,
 y nos muestre un mensaje de cuántos dígitos tiene el mismo. Finalizar el 
 programa cuando se cargue el valor 0.
 */

#include<stdio.h>
#include<conio.h>

int valor;

int main()
{
    do
    {
        printf("Digitar el valor para verificar la cantidad de digitos: ");
        scanf("%i", &valor);
        if(valor>=1000)
        {
            printf("El numero es mayor a 999.");
        }
        else if(valor>=100)
        {
            printf("El numero es de tres digitos.");
        }
        else if(valor >=10)
        {
            printf("El numero es de dos digitos");
        }
        else
        {
            printf("El numero es de un digito.");
        }
        printf("\n");
    } while(valor!=0);
    getch();
    return 0;
}