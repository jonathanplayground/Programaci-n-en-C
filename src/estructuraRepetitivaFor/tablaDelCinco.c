/*Desarrollar un programa que muestre la tabla 
de multilicar del 5 (5 al 50)
*/

#include<stdio.h>
#include<conio.h>

int tabla;

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        printf("5 x %i", i);
        tabla = 5 * i;
        printf(" = %i", tabla);
        printf("\n");
    }

    getch();
    return 0;
}