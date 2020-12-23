/*Mostrar todos los múltiplos de 8 que hay hasta el valor 500.
Debe aparecer en pantalla 8 - 16 - 24, etc.
*/

#include<stdio.h>
#include<conio.h>


int num = 0;
int n = 0;

int main()
{
    while (num <500)
    {
        num = 8 * n;
        printf("8 * %i", n);
        printf(" = %i ", num);
        printf("\n");
        n = n+1;
    }
    getch();
    return 0;
}