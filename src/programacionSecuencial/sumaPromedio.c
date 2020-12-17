//suma y promedio de 4 numeros ingresados
//la sumatoria debe ser un valor de tipo float para que el promedio nos entregue un valor decimal.

#include<stdio.h>
#include<conio.h>

int num1, num2, num3, num4;
float suma;
int sum = 4;
float promedio;

int main()
{
    printf("digite el primer numero: \n");
    scanf("%i", &num1);

    printf("digite el segundo numero: \n");
    scanf("%i", &num2);

    printf("digite el tercer numero: \n");
    scanf("%i", &num3);

    printf("digite el cuarto numero: \n");
    scanf("%i", &num4);

    suma = num1 + num2 + num3 + num4;
    promedio = suma/sum;

    printf("La suma de los numeros es: %i", suma);
    printf("\n");
    printf("El promedio de los numeros es: %0f", promedio);
    printf("\n %f/ %i = %.1f", suma,sum,promedio);
    

    return 0;
}