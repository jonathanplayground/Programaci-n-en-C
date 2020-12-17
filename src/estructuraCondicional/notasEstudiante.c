//promediar 3 notas de un estudiante y si es mayor a 7 sera promocionado

#include<stdio.h>
#include<conio.h>

float nota1, nota2, nota3, promedio, suma;
char mensaje[] = "PROMOCIONADO";
int main()
{
    printf("Digitar la primer nota:\n");
    scanf("%f",&nota1);
    printf("Digitar la segunda nota:\n");
    scanf("%f",&nota2);
    printf("Digitar la tercera nota:\n");
    scanf("%f",&nota3);

    suma = nota1 + nota2 + nota3;
    promedio = suma/3;

    if(promedio >= 7)
    {
        printf("%s", mensaje);
    }
    else
    {
        printf("No promocionado");
    }
    

    getch();
    return 0;
}