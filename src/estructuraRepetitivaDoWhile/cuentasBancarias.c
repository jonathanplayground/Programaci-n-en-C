/*
En un banco se procesan datos de las cuentas corrientes de sus clientes. 
De cada cuenta corriente se conoce: número de cuenta y sueldos actual. 
El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:

a)De cada cuenta: número de cuenta y estado de la cuenta según su sueldos, sabiendo que:
Estado de la cuenta	
            'Acreedor' si el sueldos es >0.
			'Deudor' si el sueldos es <0.
			'Nulo' si el sueldos es =0.
b) La suma total de los sueldoss acreedores
*/

#include<stdio.h>
#include<conio.h>

int cuenta = 0;
float sueldos, suma = 0;
float acreedor, deudor =0;

int main()
{
    printf("El programa nos permitirá procesar cuentas y sueldoss bancarios de clientes, \n");
    printf("ademas de la suma total de acreedores y deudores.");

    do
    {
        printf("\n Digitar el numero de cuenta: ");
        scanf("%i", &cuenta);
        if(cuenta>0)
        {
            printf("Digitar el sueldos del cliente: ");
        scanf("%f", &sueldos);
        suma = suma + sueldos;
        printf("NUMERO DE CUENTA: %i", cuenta);
        if(sueldos > 0)
        {
            printf("\n ACREEDOR");
            acreedor = acreedor + sueldos;
        }
        else
        {
            if(sueldos == 0)
            {
                printf("\n NULO");
            }
            else
            {
                printf("\n DEUDOR");
                deudor = deudor + sueldos;
            }  
        }
        }
    }        
    while(cuenta > 0);
    printf("\n valor sueldos acreedores:  %.2f", acreedor);
    printf("\n valor sueldos deudores:  %.2f", deudor);
    getch();
    return 0;
}