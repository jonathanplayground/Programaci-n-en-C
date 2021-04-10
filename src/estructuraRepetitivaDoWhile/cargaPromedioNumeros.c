/*Escribir un programa que solicite la carga de números por teclado, 
obtener su promedio. Finalizar la carga de valores cuando se ingrese el valor 0.
*/

#include<stdio.h>
#include<conio.h>

float num;
float promedio, suma = 0;
float n,s = 0;

int main()
{
    printf("El  programa permite digitar valores para hallar su promedio. \n");
    printf("Si desea digital el numero y ver en la siguiente linea su promedio presione 1. \n");
    printf("Si desea digitar los numeros y verificar el promedio al terminar de digitar presione 2. \n");
    scanf("%f", &s);
    if(s==1)
    {
        printf("Digitar 0 para finalizar \n");
        do
        {
            printf("Digitar un valor: ");
            scanf("%f", &num);
            n++;
            suma = suma + num;
            promedio = suma/n;
            printf(" Promedio: %.2f", promedio);
            printf("\n");
        }while(num !=0);
    }
    else if (s==2)
    {
        printf("Digitar 0 para finalizar \n");
        do
        {
            printf("Digitar un valor: ");
            scanf("%f", &num);
            n++;
            suma = suma + num;
            printf("\n");
        }while(num !=0);
        promedio = suma/n;
        printf(" Promedio: %.2f", promedio);
    }
    getch();
    return 0;
}