/*Realizar un programa que permita cargar dos listas de 15 valores cada una. 
Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor 
(mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.
*/

#include<stdio.h>
#include<conio.h>

int n = 1;
int lista1, lista2 = 0;
int valor1, valor2 = 0;
int suma1, suma2 = 0;

int main()
{
    printf("\n LISTA 1 \n");
    while(lista1 <15)
    {
        printf("\n Ingresar el valor: %i", n);
        printf("\n");
        scanf("%i", &valor1);
        suma1 = suma1 + valor1;
        lista1 = lista1+1;
        n = n+1;
    }
    n = 1;
    printf("\n LISTA 2 \n");
    while(lista2 <15)
    {
        printf("\n Ingresar el valor: %i", n);
        printf("\n");
        scanf("%i", &valor2);
        suma2 = suma2 + valor2;
        lista2 = lista2+1; 
        n = n+1;
    }
    printf("\n Valor de lista 1:  %i", suma1);
    printf("\n Valor de lista 2:  %i", suma2);
    if(suma1 > suma2)
    {
        printf("\n \n Lista 1 es mayor");
    }
    else
    {
        printf("\n \n Lista 2 es mayor");
    }
    
    getch();
    return 0;
}