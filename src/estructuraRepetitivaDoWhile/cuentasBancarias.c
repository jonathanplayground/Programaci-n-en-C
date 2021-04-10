/*
En un banco se procesan datos de las cuentas corrientes de sus clientes. 
De cada cuenta corriente se conoce: número de cuenta y saldo actual. 
El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:

a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
Estado de la cuenta	
            'Acreedor' si el saldo es >0.
			'Deudor' si el saldo es <0.
			'Nulo' si el saldo es =0.
b) La suma total de los saldos acreedores
*/

#include<stdio.h>
#include<conio.h>

int cuenta = 0;
float saldo, suma = 0;
float acreedor, deudor =0;

int main()
{
    printf("El programa nos permitirá procesar cuentas y saldos bancarios de clientes, \n");
    printf("ademas de la suma total de acreedores y deudores.");

    do
    {
        printf("\n Digitar el numero de cuenta: ");
        scanf("%i", &cuenta);
        if(cuenta>0)
        {
            printf("Digitar el saldo del cliente: ");
        scanf("%f", &saldo);
        suma = suma + saldo;
        printf("NUMERO DE CUENTA: %i", cuenta);
        if(saldo > 0)
        {
            printf("\n ACREEDOR");
            acreedor = acreedor + saldo;
        }
        else
        {
            if(saldo == 0)
            {
                printf("\n NULO");
            }
            else
            {
                printf("\n DEUDOR");
                deudor = deudor + saldo;
            }  
        }
        }
    }        
    while(cuenta > 0);
    printf("\n valor saldo acreedores:  %.2f", acreedor);
    printf("\n valor saldo deudores:  %.2f", deudor);
    getch();
    return 0;
}