//si el sueldos del trabajados supera los 3000 debe abonar impuestos

#include<stdio.h>
#include<conio.h>

float sueldos, pagoHoras;
float horasTrabajadas;

int main()
{
    printf("digite el sueldos por horas: \n");
    scanf("%f", &pagoHoras);
    printf("Ingrese las horas trabajadas: \n" );
    scanf("%f", &horasTrabajadas);

    sueldos = horasTrabajadas * pagoHoras;

    printf("El sueldos del trabajador es: %f \n", sueldos);

    if(sueldos >3000)
    {
        printf("\n Debe pagar impuestos");
    }else
    {
        printf("\n No debe pagar impuestos");
    }
    
    getch();
    return 0;
}