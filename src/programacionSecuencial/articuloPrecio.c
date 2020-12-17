//mostrar el valor que el comprador debe pagar al comprar un articulo debido a su cantidad llevada

#include<stdio.h>

float precio;
int cantidad;
float pago;

int main()
{
    printf("ingrese el valor del producto: \n");
    scanf("%f", &precio);
    printf("\n Ingrese la cantidad del producto: \n");
    scanf("%i", &cantidad);
    pago = cantidad*precio;

    printf("El valor a pagar es: %f", pago);
    getchar();
    return 0;
}