/* Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, 
cada curso cuenta con 5 alumnos.
Realizar un programa que muestre el curso que obtuvo el mayor promedio general
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    float cursoA[5];
    float cursoB[5];
    float sumaA = 0;
    float sumaB = 0;
    float promedioA = 0;
    float promedioB = 0;

    printf("El programa recibe 5 notas de dos cursos y entrega el curso con el promedio mas alto  \n");

    printf("Digitar las notas del curso A \n");
    for(i=0; i<5; i++)
    {
        printf("nota %i", i);
        printf("\n");
        scanf("%f", &cursoA[i]);
    }
    printf("Digitar las notas del curso B \n");
    for(i=0; i<5; i++)
    {
        printf("nota %i", i);
        printf("\n");
        scanf("%f", &cursoB[i]);
    }
//PROMEDIOS
    for(i=0; i<5; i++)
    {
        sumaA = sumaA + cursoA[i];
        promedioA = sumaA / 5;
        sumaB = sumaB + cursoB[i];
        promedioB = sumaB / 5;
    }
    printf("curso con mayor promedio: " );

    if(promedioA>promedioB)
    {
        printf("Curso A");
        printf("\n");
        printf("%f", promedioA);
    }
    else
    {
        printf("Curso B");
        printf("\n");
        printf("%f", promedioB);
    }

    getch();
    return 0;
}