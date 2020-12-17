//Realizar la carga de dos números enteros por teclado e imprimir su suma y su producto.

#include<stdio.h>
#include<conio.h>

float num1;
float num2;
float suma, producto;

int main()
{
    printf("digite el primer numero: \n");
    scanf("%f", &num1);
    
    printf("digite el segundo numero: \n");
    scanf("%f", &num2);

    suma = num1 + num2;
    producto = num1*num2;

    printf("la suma de los dos numeros es; %f", suma);
    printf("\n");
    printf("El producto de los dos numeros es: %f", producto, "\n");
    getchar();
    return 0;
}