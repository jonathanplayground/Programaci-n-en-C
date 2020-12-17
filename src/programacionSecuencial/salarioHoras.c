//calculo de salario por horas de trabajadores

#include <stdio.h>

float salario;
int horasTrabajadas;
float costoHoras;

int main()
{
    printf("Ingrese el numero de horas trabajadas:  \n");
    scanf("%i", &horasTrabajadas);
    printf("ingrese el costo por horas: ");
    scanf("%f", &costoHoras);

    salario = horasTrabajadas * costoHoras;

    printf("el salario total es: %f", salario);
    
    return 0;
}

