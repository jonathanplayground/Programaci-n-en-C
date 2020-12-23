/*Se ingresan un conjunto de n alturas de personas por teclado. 
Mostrar la altura promedio de las personas.
*/

#include<stdio.h>
#include<conio.h>

int n, x = 0;
float altura = 0;
float promedio, suma = 0;


int main()
{
    printf("Digital la cantidad de personas para ingresar datos: \n");
    scanf("%i", &n);
    while(x<n)
    {
        printf("Digitar la altura: \n");
        scanf("%f", &altura);
        if (altura >1.1 && altura <2.4)
        {
            suma = suma + altura;
            x = x+1;
        }
        else
        {
            printf("\n La altura no corresponde, rango de altura 1.1m - 2.4m \n");
        }
    }
    promedio = suma/n;

    printf("\n Promedio de las alturas es: %.2f", promedio);
    getch();
    return 0;
}
