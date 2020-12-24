/*Escribir un programa que lea 10 números enteros y luego muestre cuántos 
valores ingresados fueron múltiplos de 3 y cuántos de 5. Debemos tener en 
cuenta que hay números que son múltiplos de 3 y de 5 a la vez
*/

#include<stdio.h>
#include<conio.h>

int num;
int i;
int divTres, divCinco, divNo = 0;

int main()
{
    for (i = 0; i<10; i++)
    {

        printf("Digitar el numero para analizar: ");
        scanf("%i", &num);
        if(num % 3 == 0)
        {
            divTres = divTres + 1;
        }
        if( num % 5 == 0)
        {
            divCinco++;
        }
        if(num %3 !=0 && num %5 !=0)
        {
            divNo++;
        }
        
    }
    printf("\n Numeros divisibles en tres: %i", divTres);
    printf("\n Numeros divisibles en cinco: %i", divCinco);
    printf("\n Numeros no divisibles en cinco y tres: %i", divNo);
    getch();
    return 0;
}