/*Desarrollar un programa que permita cargar n números enteros y 
luego nos informe cuántos valores fueron pares y cuántos impares.
Emplear el operador “%” en la condición de la estructura condicional 
(este operador retorna el resto de la división de dos valores, por 
ejemplo 11%2 retorna un 1):
*/

#include<stdio.h>
#include<conio.h>

int n = 0;
int num = 0;
int par, imPar, resultado = 0;

int main()
{
    while(n < 5)
    {
        printf("Digitar el numero para realizar analisis: \n");
        scanf("%i", &num);
        resultado = num %2;
        if(resultado == 0)
        {
            par = par +1;
        }
        else
        {
            imPar = imPar +1;
        }
        n = n+1;
    }
    printf("\n Numeros pares: %i \n", par);
    printf("\n Numeros impares: %i \n", imPar);

    getch();
    return 0;
}