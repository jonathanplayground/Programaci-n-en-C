//si la fecha ingresada es navidad se evidencia un mensaje

#include<stdio.h>
#include<conio.h>

int dia, mes, age;

int main()
{
    printf("Digitar el dia: \n");
    scanf("%i", &dia);
    printf("Digitar el mes \n");
    scanf("%i", &mes);
    printf("Digitar el año  \n");
    scanf("%i", &age);

    if(dia ==24 && mes ==12)
    {
        printf("\n Navidad!!");
    }
    else
    {
        printf("Dia normal");
    }
    
    getch();
    return 0;
}