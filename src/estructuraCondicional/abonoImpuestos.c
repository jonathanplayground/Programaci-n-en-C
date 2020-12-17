//si el sueldo del trabajados supera los 3000 debe abonar impuestos

#include<stdio.h>
#include<conio.h>

float sueldo, pagoHoras;
float horasTrabajadas;

int main()
{
    printf("digite el sueldo por horas: \n");
    scanf("%f", &pagoHoras);
    printf("Ingrese las horas trabajadas: \n" );
    scanf("%f", &horasTrabajadas);

    sueldo = horasTrabajadas * pagoHoras;

    printf("El sueldo del trabajador es: %f \n", sueldo);

    if(sueldo >3000)
    {
        printf("\n Debe pagar impuestos");
    }else
    {
        printf("\n No debe pagar impuestos");
    }
    
    getch();
    return 0;
}