/*Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. 
Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. 
Sumar componente a componente.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int vector1[4];
    int vector2[4];
    int suma[4];

    printf("El programa permite ingresar dos conjuntos de 4 numeros y sumarlos componente a componente");

    printf("Digital el primer conjunto de valores \n");

    for(i = 0; i<4; i++)
    {
        printf("digitar el valor %i", i);
        printf("\n");
        scanf("%i", &vector1[i]);
    }
    printf("Digital el segundo conjunto de valores \n");
    for(i = 0; i<4; i++)
    {
        printf("digitar el valor %i", i);
        printf("\n");
        scanf("%i", &vector2[i]);
    }
    printf("\n");
    for(i = 0; i<4; i++)
    {
        suma[i]= vector1[i]+vector2[i];
        printf("suma vectores:  %i", i);
        printf("\n");
    
        printf("%i", suma[i]);
        printf("\n");
    }
    getch();
    return 0;
}
