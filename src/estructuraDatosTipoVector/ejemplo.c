//Ejemplo para declaracion de estructura de almacenamiento de datos tipo vector
//Se desea guardar los sueldoss de 5 operarios.

#include<stdio.h>
#include<conio.h>


//las variables se pueden crear fuera o dentro del main

int main()
{
    int f;
    //Declaracion de la variable
    int sueldos[5];
    
    //carga del vector
    for(f = 0; f<5; f++)
    {
        printf("Ingresar el valor del sueldos");
        printf("\n");
        scanf("%i", &sueldos[f]);
    }
    printf("Listado de sueldoss");
    printf("\n");
    printf("\n");
    //impresion de sueldoss 
    for(f=0; f<5; f++)
    {
        printf("sueldos %i", f);
        printf("\n");
        printf("%i", sueldos[f]);
        printf("\n");
    }

    getch();
    return 0;
}