/*
Realizar un programa que acumule (sume) valores ingresados por 
teclado hasta ingresar el 9999 (no sumar dicho valor, indica que 
ha finalizado la carga). Imprimir el valor acumulado e informar 
si dicho valor es cero, mayor a cero o menor a cero.
*/

#include<stdio.h>
#include<conio.h>

float valor, suma = 0;

int main()
{
    printf("El programa nos entrega la suma de los valores que sean agregados, tambien indica \n");
    printf("si el valor es menor, igual o mayor que cero. El programa finaliza al digitar 9999 \n");

    do
    {
        printf("Digitar el valor: ");
        scanf("%f",&valor);
        suma = suma + valor;
    }
    while(valor !=9999);
    suma = suma - 9999;
    printf("\n El valor total de la suma es:  %.2f", suma);
    
    if(suma >0)
    {
        printf("\n El valor es mayor que 0. ");
    }
    else
    {
        if(suma ==0)
        {
            printf("\n El valor es igual que 0. ");
        }
        else
        {
            printf("\n El valor es menor que 0. ");
        }
    }

    getch();
    return 0;
}