/*Mostrar el abecedario de la 'A' a la 'Z' primero en mayúsculas y luego en minúsculas. 
Utilizar una variable de tipo char dentro de un for
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char letra;
    /*      //tambien funcionó este metodo.
    for(int i = 65; i<91; i++)
    {
        printf("%c", i);
        printf(" - ");
    }
    */
    printf("Abecedario \n");
    for(letra = 'A'; letra<='Z'; letra++)
    {
        printf("%c", letra);
        printf(" - ");
    }
    printf("\n");   
    for(letra='a'; letra<='z'; letra++)
    {
        printf("%c", letra);
        printf(" - ");
    }

    getch();
    return 0;
}