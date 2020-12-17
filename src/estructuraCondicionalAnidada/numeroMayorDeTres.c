//Identificar numero mayor de 3 numeros ingresados
#include<stdio.h>
#include<conio.h>

int num1,num2,num3;


int main()
{
    printf("Digitar el primer numero: \n");
    scanf("%i", &num1);
    printf("Digitar el segundo numero: \n");
    scanf("%i", &num2);
    printf("Digitar el tercer numero: \n");
    scanf("%i", &num3);

    if (num1 > num2)
    {
        if(num1>num3)
        {
            printf("\n numero mayor %i", num1);
        }
        else
        {
            printf("\n numero mayor %i", num3);
        }
    }
    else
    {
        if(num2 > num3)
        {
            printf("\n Numero mayor %i", num2);
        }
        else
        {
            printf("\n numero mayor %i", num3);
        }
        
    }
    
    getch();
    return 0;
}