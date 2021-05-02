/*Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados 
(4 por la mañana y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados 
agrupados por turno (definir los dos vectores con componentes de tipo float)
Imprimir los gastos en sueldos de cada turno.
*/

#include<stdio.h>
#include<conio.h>

int main()
{

    int i;
    //almacena valor de tipo float
    float morning[4];
    float tarde[4];
    float saldoM = 0;
    float saldoT = 0;


    printf("El programa almacena los saldos de los trabajadores de la jornada mañana y jornada tarde");
    printf("\n");

    printf("Horario mañana");
    printf("\n");
    for(i=0; i<4; i++)
    {
        printf("Digitar el saldo del trabajador %i", i);
        printf("\n");
        scanf("%f", &morning[i]);
        saldoM = morning[i] + saldoM;
    }

    printf("Horario tarde");
    printf("\n");
    for(i=0; i<4; i++)
    {
        printf("Digitar el saldo del trabajador %i", i);
        printf("\n");
        scanf("%f", &tarde[i]);
        saldoT = tarde[i] + saldoT;
    }
    printf("\n");
    printf("Gastos Jornada Mañana %0.2f", saldoM);
    printf("\n");
    printf("Gastos Jornada Tarde %0.2f", saldoT);
    printf("\n");

    getch();
    return 0;

}