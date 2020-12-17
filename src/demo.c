#include <stdio.h>

int main()
{
    char letra = 'a';

    printf("hola mundo");
    printf("la letra ingresada es: %c", letra);


    int entrada_salida;

    printf("Ingrese un numero:  "); 
    scanf("%d", &entrada_salida);

    printf("El numero es:  %d", entrada_salida);

    return 0;
}