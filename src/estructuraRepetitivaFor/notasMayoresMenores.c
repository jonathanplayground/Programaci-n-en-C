/*Escribir un programa que lea 10 notas de alumnos y nos informe 
cuántos tienen notas mayores o iguales a 7 y cuántos menores.
*/

#include<stdio.h>
#include<conio.h>

int nota =0;
int mayor, menor, error = 0;

int main()
{
    for (int i = 0;i <10; i++)
    {
        printf("Digitar la nota: \n");
        scanf("%i", &nota);
        if(nota >=0 && nota<=10)
        {
            if(nota >= 7)
            {
                mayor = mayor +1;
            }
            else
            {
                menor = menor +1;
            }            
        }
        else
        {
            //error = error +1;
            printf("\n El valor de la nota no corresponde \n");
            i--;
        }
        
    }
    printf("\n Alumnos aprobados con nota mayor de 7: \n %i", mayor);
    printf("\n Alumnos reprobados con nota menor a 7: \n %i", menor);

    getch();
    return 0;
}