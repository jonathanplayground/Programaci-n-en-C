/* Definir tres variables de tipo char y cargar dos por asignación y la tercera por teclado. 
Imprimir los valores de las mismas.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char letra1 = 65;
    char letra2 = 'A';      //COMILLA SIMPLE.
    char letra3;

    printf("Digite un operacion \n");
    scanf("%c", &letra3);   //NO OLVIDAR "&"" para indicar que vamos a cargar un valor.

    printf("%c", letra3);
    printf("\n");
    printf("%c", letra1);
    printf("\n");
    printf("%c", letra2);
    
    getch();
    return 0;
}
