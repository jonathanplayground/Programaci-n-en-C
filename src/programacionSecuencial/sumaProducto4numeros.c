//calculo de suma de dos numeros y producto de dos numeros

#include<stdio.h>

int num1, num2, num3, num4;
int suma, producto;

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
    
    suma = num1 + num2;
    producto = num3 * num4;

    printf("la suma de los dos primeros numeros es: %i", suma);
    printf("\n");

    printf("El producto de los dos ultimos numeros es: %i", producto);
    
    return 0;
}