/*En una empresa trabajan n empleados cuyos sueldos oscilan entre 
$100 y $500, realizar un programa que lea los sueldos que cobra 
cada empleado e informe cuántos empleados cobran entre $100 y $300 
y cuántos cobran más de $300. Además el programa deberá informar el 
importe que gasta la empresa en sueldos al personal
*/

#include<stdio.h>
#include<conio.h>

int n, x = 0;
float sueldo, importe = 0;
int menor, mayor = 0;

int main()
{
    while(n<100)
    {
        printf("Digitar sueldo empleado: \n");
        scanf("%f", &sueldo);
        if (sueldo >= 100 && sueldo <= 500)
        {    
            x = x + 1;
            importe = importe + sueldo;
            if(sueldo >= 300)
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
            printf("Sueldo ingresado no corresponde, rango $100-$500");
        }
        printf("\n Personas ingresadas: \n %i", x);
        printf("\n Importe de gasto en sueldo: \n %.3f", importe);
        printf("\n Sueldos mayores a 300: %i", mayor);
        printf("\n Sueldos menores a 300: %i \n", menor);
        n = n+1;
    }    
    getch();
    return 0;
}