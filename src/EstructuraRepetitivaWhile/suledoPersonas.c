/*En una empresa trabajan n empleados cuyos sueldoss oscilan entre 
$100 y $500, realizar un programa que lea los sueldoss que cobra 
cada empleado e informe cuántos empleados cobran entre $100 y $300 
y cuántos cobran más de $300. Además el programa deberá informar el 
importe que gasta la empresa en sueldoss al personal
*/

#include<stdio.h>
#include<conio.h>

int n, x = 0;
float sueldos, importe = 0;
int menor, mayor = 0;

int main()
{
    while(n<100)
    {
        printf("Digitar sueldos empleado: \n");
        scanf("%f", &sueldos);
        if (sueldos >= 100 && sueldos <= 500)
        {    
            x = x + 1;
            importe = importe + sueldos;
            if(sueldos >= 300)
            {
                mayor = mayor +1;
            }
            else
            {
                menor = menor + 1;
            }
        }
        else
        {
            printf("sueldos ingresado no corresponde, rango $100-$500");
        }
        printf("\n Personas ingresadas: \n %i", x);
        printf("\n Importe de gasto en sueldos: \n %.3f", importe);
        printf("\n sueldoss mayores a 300: %i", mayor);
        printf("\n sueldoss menores a 300: %i \n", menor);
        n = n+1;
    }    
    getch();
    return 0;
}