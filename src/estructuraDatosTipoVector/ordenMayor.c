/*Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor
*/

#include<stdio.h>
#include<conio.h>


int main()

{
    float vector[10];
    int i;
    int y = 0;
    float analisis = 0;

    printf("El programa nos permite evidenciar si el vector esta ordenado de menos a mayor \n");

    printf("Digitar los datos del vector: \n");
    for(i=0; i<10; i++)
    {
        scanf("%f", &vector[i]);
        printf("\n");
    }

    for(i=0; i<10;i++)    
    {
        /*
        if (vector[i+1]<vector[i]) // importante la forma como analiza el vector siguiente.
        {
            orden = 0;  // remplaza la variable Y, dando un valor de cambio si el enunciado no se cumple.
            break   // funciona para cualquier estructura repetitiva del lenguaje c, Finaliza el for al cumplirse la sentencia.
        }
        */
        if(analisis<vector[i])
        {
            y++;
        }
        analisis = vector[i];
    }
    if(y == 10){
        printf("Ordenados de menor a mayor\n");
        for(i=0; i<10; i++)
        {
            printf("%0.2f", vector[i]);
            printf(" - ");
        }
    }
    else
    {
        printf("No estan ordenados de manera ascendente \n");
        for(i=0; i<10; i++)
        {
            printf("%0.2f", vector[i]);
            printf(" - ");
        }
    }
    
    getch();
    return 0;
}