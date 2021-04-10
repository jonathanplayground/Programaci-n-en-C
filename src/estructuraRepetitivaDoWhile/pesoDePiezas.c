/*Realizar un programa que permita ingresar el peso (en kilogramos) 
de piezas. El proceso termina cuando ingresamos el valor 0. Se debe informar:
a) ¿Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.?, 
¿Cuántas con más de 10.2 Kg.? y ¿Cuántas con menos de 9.8 Kg.?
b) La cantidad total de piezas procesadas
*/

#include<stdio.h>
#include<conio.h>

float peso = 0;
int canA, canB, canC = 0;

int main()
{
    printf("El programa analiza el peso entre 9.8Kg y 10.2Kg, tambien la cantidad de piezas ingresadas \n");
    printf("El programa finaliza al presionar 0 \n");

    do
    {
        printf(" Digitar el peso de la pieza: ");
        scanf("%f", &peso);
        if(peso >= 10.2)
        {
            canA++;
        }
        else
        {
            if (peso >= 9.8)
            {
                canB++;
            }
            else
            {
                canC++;
            } 
        }
        
    } while (peso != 0);
    canC = canC - 1;
    printf("\n Cantidad de piezas con peso mayor a 10,2:  %i", canA);
    printf("\n Cantidad de piezas con peso entre 10,2 y 9,8:  %i", canB);
    printf("\n Cantidad de piezas con peso menor a 9,8:  %i", canC);
    
    getch();
    return 0;
}