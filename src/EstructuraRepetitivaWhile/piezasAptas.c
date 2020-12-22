/*Una planta que fabrica perfiles de hierro posee un lote de n piezas.
Confeccionar un programa que pida ingresar por teclado la cantidad de 
piezas a procesar y luego ingrese la longitud de cada perfil; sabiendo 
que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 
son aptas. Imprimir por pantalla la cantidad de piezas aptas que hay en 
el lote
*/

#include<stdio.h>
#include<conio.h>

int n, piezas = 0;
float largo;
int aptas, noAptas = 0;

int main()
{   
    printf("Digitar el numero de piezas a ingresar \n");
    scanf("%i", &piezas);

    while(n < piezas)
    {
        printf("\n Digitar el largo de la pieza: ");
        scanf("%f", &largo);
        if(largo<1.3 && largo >1.2)
        {
            aptas = aptas + 1;
        }
        else
        {
            noAptas = noAptas + 1;
        }
        n = n+1;
    }
    printf("\n Cantidad de piezas aptas %i", aptas);
    printf("\n Cantidad de piezas no aptas %i", noAptas);
    getch();
    return 0;
}