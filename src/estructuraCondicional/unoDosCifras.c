//mostrar un mesaje diciendo si un numero tiene dos o tres cifras

#include<stdio.h>
#include<conio.h>

float division, num;

int main()
{
    printf("Digitar un numero: \n");
    scanf("%f", &num);

    division = num/10;
    if(num>99)
    {
        printf("\n El numero es mayor de dos cifras");
    }
    else if(division>1)
    {
        printf("\n Numero de dos cifras");
    }
    else
    {
        {
            printf("\n numero de una cifra");
        }
    }
    
    getch();
    return 0;
}