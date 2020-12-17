//calcular superficie de un cuadrado

#include<stdio.h>

float lado;
float superficie;

int main()
{
    printf("ingrese la longitud de un lado del cuadro en metros; \n");
    scanf("%f", &lado);

    superficie = lado*lado;
    
    printf("la superficie del cuadrado es: %f", superficie, "mts");

    getchar();
    return 0;
}