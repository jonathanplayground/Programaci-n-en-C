//El programa evidenciara por pantalla los numeros del 1 al 100
#include<stdio.h>
#include<conio.h>

int num = 0;

int main()
{
    while(num<100)
    {
        num = num + 1;
        printf("%i ", num);
    }
    getch();
    return 0;
}