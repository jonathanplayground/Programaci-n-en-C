/*Confeccionar un programa que permita ingresar un valor del 1 al 10 
y nos muestre la tabla de multiplicar del mismo (los primeros 12 términos)
*/

#include<stdio.h>
#include<conio.h>

int tabla;
int numMultiplicar;
int main()
{
    printf("Digitar un numero de 1 a 10 del cual desea ver la tabla: ");
    scanf("%i", &numMultiplicar);
    if (numMultiplicar<=10 && numMultiplicar >=1)
    {
        printf("\n tabla de %i", numMultiplicar);
        printf("\n");
        for(int i=1; i<=12; i++)
        {
            printf("%i", numMultiplicar);
            printf(" * %i", i);
            tabla = numMultiplicar * i;
            printf(" = %i", tabla);
            printf("\n");
        }
    }
    else
    {
        printf("\n El valor digitado no se encuentra dentro de los limites establecidos");
    }
    
    getch();
    return 0;
}