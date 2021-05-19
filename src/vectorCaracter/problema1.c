/*
Definir una variable para almacenar el nombre y apellido del programador. Mostrar dicho nombre por pantalla
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char programador[18] = "Jonathan Guerrero";

    printf("Nombre Programador \n");
    printf("%s", programador);      //debemos indicar en la cadena de formato el caracter s (string):

    getch();
    return 0;
}