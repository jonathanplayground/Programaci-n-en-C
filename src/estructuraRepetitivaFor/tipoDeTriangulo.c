/*Realizar un programa que lea los lados de n triángulos, e informar:
a) De cada uno de ellos, qué tipo de triángulo es: equilátero 
(tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
b) Cantidad de triángulos de cada tipo.
c) Tipo de triángulo que posee menor cantidad.
*/

#include<stdio.h>
#include<conio.h>

float ladoA, ladoB, ladoC = 0;
int esc, iso, equ = 0;
int cantidad = 0;

int main()
{
    printf("Digitar la cantidad de triangulos que desea analizar: ");
    scanf("%i", &cantidad);

    for(int i=1; i<=cantidad;i++)
    {
        printf("Digitar el valor del lado a del triangulo: ");
        scanf("%f", &ladoA);
        printf("Digitar el valor del lado b del triangulo: ");
        scanf("%f", &ladoB);
        printf("Digitar el valor del lado c del triangulo: ");
        scanf("%f", &ladoC);
        
        if(ladoA==ladoB || ladoB==ladoC || ladoA == ladoC)
        {
            if(ladoA == ladoB && ladoB == ladoC)
            {
                printf("\n Triangulo Equilatero");
                printf("\n");
                equ++;
            }
            else
            {
                printf("\n Triangulo Isoceles");
                printf("\n");
                iso++;
            }
            
        }
        else
        {
            printf("\n Triangulo Escaleno");
            printf("\n");
            esc++;
        }
        
    }
    printf("\n La cantidad de triangulos equilateros es: %i", equ);
    printf("\n La cantidad de triangulos isoceles es: %i", iso);
    printf("\n La cantidad de triangulos escalenos es: %i", esc);
}