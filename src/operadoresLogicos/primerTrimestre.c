//Ingresar una fecha, si la fecha corresponde al primer trismestre del año se vera la fecha en pantalla
//Condicional junto con operador logico

#include<stdio.h>
#include<conio.h>

int dia, mes, age;

int main()
{
    printf("Digitar el dia: \n");
    scanf("%i", &dia);
    printf("\n Digitar el mes: \n");
    scanf("%i", &mes);
    printf("\n Digitar el año \n");
    scanf("%i", &age);

    if(mes ==1 || mes ==2 || mes ==3)
    {
        printf("\n dia: %i", dia);
        printf(" mes: %i", mes);
        printf(" año: %i", age);
    }
    else
    {
        printf("No es una fecha del primer trimestre");
    }

    getch();
    return 0;
}