//verificar cual de los dos numeros es mayor

#include<stdio.h>
#include<conio.h>

int num1, num2;

int main()
{
    printf("Digite el primer numero: \n ");
    scanf("%i", &num1);
    printf("Digite el segundo numero: \n");
    scanf("%i", &num2);

    if(num1<num2)
    {
        printf("\n El primer numero es menor al segundo numero");
    }
    else
    {
        printf("\n El primer numero es mayor al segundo numero");
    }
    
    getch();
    return 0;
}