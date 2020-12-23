/*Escribir un programa que solicite ingresar 10 notas de alumnos 
y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.
*/

#include<stdio.h>
#include<conio.h>

float nota;
int n = 0;
int menor, mayor = 0;
int main()
{
    while(n < 10)
    {
        printf("Digite la nota del alumno: \n");
        scanf("%f", &nota);
        if(nota>10 || nota<0)
        {
            printf("\n La nota ingresada no tiene el valor indicado, rango de nota 0-10 \n");
        }
        else
        {
            if(nota>=7)
            {
                mayor = mayor + 1;
            }
            else
            {
                menor = menor + 1;
            }
        n = n +1;   
        } 
    }

    printf("\n Alumnos con nota mayor o igual a 7: \n %i", mayor);
    printf("\n Alumnos con nota menor a 7: \n %i", menor);
    getch();
    return 0;
}