//numero entero ingresado, negativo, positivo o nulo
#include<stdio.h>
#include<conio.h>

int num;

int main()
{
    printf("Ingresar numero: \n");
    scanf("%i", &num);

    if(num == 0)
    {
        printf("\n El numero es nulo");
    }
    else
    {
        if(num > 0 )
        {
            printf("\n El numero es positivo");
        }
        else
        {
            printf("\n El numero es negativo");
        }
        
    }
    
    getch();
    return 0;
}