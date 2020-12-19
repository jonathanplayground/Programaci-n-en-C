//verificar el numero mayor de tres numeros ingresados

#include<stdio.h>
#include<conio.h>

int num1, num2, num3;

int main()
{
    printf("Digitar el primer nuemro: \n");
    scanf("%i", &num1);
    printf("Digitar el segundo nuemro: \n");
    scanf("%i", &num2);
    printf("Digitar el tercer nuemro: \n");
    scanf("%i", &num3);
    
    if(num1 >num2 && num1 >num3)
    {
        printf("\n El numero mayor es: %i", num1);
    }
    else if(num2 >num1 && num2 >num3)
    {
        printf("\n El  numero mayor es: %i", num2);
    }
    else
    {
        printf("\n El numero mayor es: %i", num3);
    }
    
    getch();
    return 0;
}