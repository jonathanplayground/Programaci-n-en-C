/*Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
a) La cantidad de valores ingresados negativos.
b) La cantidad de valores ingresados positivos.
c) La cantidad de múltiplos de 15.
d) El valor acumulado de los números ingresados que son pares
*/

#include<stdio.h>
#include<conio.h>

int neg, pos, multiplo, par = 0;
int num, acumulado = 0;
int numPar, MultiQuince = 0;

int main()
{
    for(int i = 1; i <=10; i++)
    {
        printf("Digitar el valor: ");
        scanf("%i", &num);  
       
        if(num>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
        
        if(num%2 == 0)
        {
            par++;
            acumulado = acumulado + num;
        }
        if(num%15 == 0)
        {
            multiplo++;
        }

    }

    printf("\n Cantidad de numeros pares: %i", par);
    printf("\n Acumulado de los numeros pares: %i", acumulado);
    printf("\n Cantidad de numeros negativos: %i", neg);
    printf("\n Cantidad de numeros positivos: %i", pos);
    printf("\n Cantidad de numeros multiplos de 15: %i", multiplo);

    getch();
    return 0;
}