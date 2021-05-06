/*Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    float elementos[8];
    float total = 0;
    float may = 0;
    float men = 0;

    printf("El programa permite el ingreso de 8 elementos numericos, entrega el acumulado total \n");
    printf(" el acumulado de los valores mayores a 36 y los valores mayores a 50. \n");
    for(i=0; i<8; i++)
    {
        printf("Digitar el valor  %i", i);
        printf("\n");
        scanf("%f", &elementos[i]);
    }

    for(i=0; i<8; i++)
    {
        if(elementos[i]>36)
        {
            if(elementos[i]>=50)
            {
                may = elementos[i] + may;
            }
            else
            {
                men = elementos[i]+ men;
            }
            
        }
        total = elementos[i]+ total;
    }

    printf("Acumulado total: %0.2f", total);
    printf("\n");
    printf("Acumulado mayor a 36: %0.2f", men);
    printf("\n");
    printf("Acumulado mayor a 50: %0.2f", may);

    getch();
    return 0;

}
