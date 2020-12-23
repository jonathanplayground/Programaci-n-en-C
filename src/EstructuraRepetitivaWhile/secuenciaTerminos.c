/*Realizar un programa que imprima 25 términos de la serie 
11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado
*/

#include<stdio.h>
#include<conio.h>

int num = 0;
int n = 0;

int main()
{
    while(n<25)
    {
        num = num + 11;
        printf("%i - ", num);
        n = n+1;
    }

    getch();
    return 0;
}