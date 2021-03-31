/*Escribir un programa que pida ingresar coordenadas (x,y) 
que representan puntos en el plano.
Informar cuántos puntos se han ingresado en el primer, segundo, 
tercer y cuarto cuadrante. Al comenzar el programa se pide que se 
ingrese la cantidad de puntos a procesar.
*/
#include<stdio.h>
#include<conio.h>

float x,y = 0;
int cUno, cDos, cTres, cCuatro = 0;
int pCantidad = 0;

int main()
{
    printf("Digitar la cantidad de coordenadas que desea procesar: ");
    scanf("%i", &pCantidad);

    for(int i=1; i<=pCantidad; i++)
    {
        printf("Digitar la coordenada x: ");
        scanf("%f", &x);
        printf("Digitar la coordenada y: ");
        scanf("%f", &y);
        printf("\n");
        if(x>0)
        {
            if(y>0)
            {
                cUno++;
            }
            else
            {
                cCuatro++;
            }
            
        }
        else
        {
            if(y>0)
            {
                cDos++;
            }
            else
            {
                cTres++;
            }
            
        }
        

    }
    printf("\n Cantidad de puntos en el primer cuadrante: %i", cUno);
    printf("\n Cantidad de puntos en el segundo cuadrante: %i", cDos);
    printf("\n Cantidad de puntos en el tercer cuadrante: %i", cTres);
    printf("\n Cantidad de puntos en el cuarto cuadrante: %i", cCuatro);
    getch();
    return 0;
}