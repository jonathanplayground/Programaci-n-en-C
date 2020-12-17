// suma y diferencia - producto y division, segun cual numero sea mayor

#include<stdio.h>
#include<conio.h>


float num1, num2;
float suma, resta, producto, division;


int main()
{
    printf("Digitar el primer numero \n");
    scanf("%f", &num1);
    printf("Digitar el segundo numero: \n");
    scanf("%f", &num2);

    if(num1 > num2)
    {
        suma = num1 + num2;
        resta = num1 - num2;
        printf("\n La sumatoria de los numeros es: %f", suma);
        printf("\n La diferencia de los numeros es: %f", resta);
    }
    else
    {
        producto = num1 * num2;
        division = num1/num2;
        printf("\n El producto de los numeros es: %.1f", producto);
        printf("\n La division de los numeros es: %.1f", division);
    }

    getch();
    return 0;
}