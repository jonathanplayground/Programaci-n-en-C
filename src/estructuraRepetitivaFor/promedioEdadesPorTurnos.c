/*Se cuenta con la siguiente información:
Las edades de 5 estudiantes del turno manana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.
a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres 
turnos tiene un promedio de edades menor.
*/

#include<stdio.h>
#include<conio.h>

int manana = 5;
int tarde = 6;
int noche = 11;
int edad, total = 0;
float pManana, pTarde, pNoche = 0;


int main()
{
    char menor[7]= "jornada";
    printf("Estudiantes jornada manana \n");
    for(int i = 1; i <=manana; i++)
    {
        printf("Digite la edad del estudiante: ");
        scanf("%i", &edad);
        total = total+edad;
        pManana = total/manana;
    }
    total = 0;
    edad = 0;
    printf("Estudiantes jornada Tarde \n");
    for(int i = 1; i <= tarde; i++)
    {
        printf("Digite la edad del estudiante: ");
        scanf("%i", &edad);
        total = total+edad;
        pTarde = total/tarde;
    }
    edad = 0;
    total = 0;
    printf("Estudiantes jornada Nocturna \n");
    for(int i = 1; i <=noche; i++)
    {
        printf("Digite la edad del estudiante: ");
        scanf("%i", &edad);
        total = total+edad;
        pNoche = total/noche;
    }
    total = 0;
    edad = 0;
    if(pManana<pTarde || pNoche<pTarde)
    {
        if(pManana<pNoche)
        {
            char menor[6] = "manana";
            printf("\n la jornada mañana tiene el promedio mas bajo \n");
        }
        else
        {
            char menor[5]= "noche";
            printf("\n la jornada nocturna tiene el promedio mas bajo \n");
        } 
    }
    else
    {
        char menor[5] = "Tarde";
        printf("\n la jornada tarde tiene el promedio mas bajo \n");
    }
    
    printf("\n Promedio de edades jornada Manana: %f", pManana);
    printf("\n Promedio de edades jornada Tarde: %f", pTarde);
    printf("\n Promedio de edades jornada Noche: %f", pNoche);

    getch();
    return 0;
}