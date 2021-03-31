/*Confeccionar un programa que lea n pares de datos, 
cada par de datos corresponde a la medida de la base y la altura de un triángulo. 
El programa deberá informar:
a) De cada triángulo la medida de su base, su altura y su superficie.
b) La cantidad de triángulos cuya superficie es mayor a 12.
*/

#include<stdio.h>
#include<conio.h>

float base, altura, superficie = 0;
int cantidad = 0;
int main()
{
    printf("Digitar la cantidad de datos de triagulo que require analizar: ");
    scanf("%i", &cantidad);
    for(int i = 0; i<= cantidad; i++)
    {
        printf("Digitar la base del triangulo: ");
        scanf("%f", &base);
        printf("Digitar altura del triangulo: ");
        scanf("%f", &altura);
        superficie = base *(altura/2);
        printf("La superficie del triangulo es: %f", superficie);
        printf("\n");
    }
    getch();
    return 0;

}