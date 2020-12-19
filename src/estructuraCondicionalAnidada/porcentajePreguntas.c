//Porcentaje de preguntas correctas, segun la cantidad de preguntas realizadas dar una valoracion al porcentaje

#include<stdio.h>
#include<conio.h>

int preguntas, pCorrectas;

int main()
{
    printf("Digitar la cantidad de preguntas realizadas \n");
    scanf("%i", &preguntas);
    printf("Digitar las preguntas correctas \n");
    scanf("%i", &pCorrectas);

    int porcentaje = (pCorrectas * 100)/preguntas;

    printf("\n El porcentaje total es: %i", porcentaje);

    if(porcentaje >=90)
    {
        printf("\n Nivel Maximo");
    }
    else if(porcentaje <90 && porcentaje >=75)
    {
        printf("\n Nivel medio");
    }
    else if(porcentaje <75 && porcentaje >= 50)
    {
        printf("\n Nivel regular");
    }
    else if(porcentaje <50)
    {
        printf("\n Fuera de nivel");
    }


    getch();
    return 0;
}

/* Otra opcion 
if (porcentaje >= 90)
    {
        printf("Nivel maximo");
    }
    else
    {
        if (porcentaje >= 75)
        {
            printf("Nivel medio");
        }
        else
        {
            if (porcentaje >= 50)
            {
                printf("Nivel regular");
            }
            else
            {
                printf("Fuera de nivel");
            }
        }
    }
    */