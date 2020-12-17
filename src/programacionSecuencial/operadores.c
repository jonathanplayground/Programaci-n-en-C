//operadores 

#include <stdio.h>

int main()
{
    int a = 4;
    int b = 5;
    float c = 4;
    float d = 5;
    double divis = c / d;
    int suma;
    int resta = a - b;
    int multi = a * b;  //= a *= b
    int divi = a / b;
    int mod = a % b;
    suma = a + b;   // suma = a +=b

    printf("la suma de los numeros es: %d \n", suma);
    printf("la resta de los numeros es: %d \n ", resta);
    printf("la multiplicacion de los numeros es; %d \n", multi);
    printf("la division de los numeros es: %d \n ", divi);
    printf("El modulo de los numeros es: %d \n ", mod);
    printf("la division 2 de los numeros es: %f \n ", divis);


    // incremento - decremento

    int valor = 0;

    int incremento = ++valor;
    int valor1 = valor;
    int decremento = --valor1;

    printf("incremento de valor: %d \n", incremento);
    printf("el valor decrementado es: %d \n", decremento);

    //operador logico

    int x = 5;
    int y = 6;

    int rpta = x < y;
    int rpta2 = x > y;
    printf("la respuesta es: %d \n", rpta);
    printf("la respuesta es: %d \n", rpta2);



    //tamaño de datoo
    int y2;

    printf("tamano de dato: %lu bytes \n", sizeof(y2) );
    return 0;
}