//calcular el perimetro de un cuadro
//perimetro = lado * 4

#include<stdio.h>

float lado;
float perimetro;

int main()
{
    printf("ingrese el valor numerico de un lado del cuadro: \n");
    scanf("%f", &lado);
    perimetro = lado * 4;
    printf("el perimetro del cuadrado es: %f", perimetro);
    return 0;
}