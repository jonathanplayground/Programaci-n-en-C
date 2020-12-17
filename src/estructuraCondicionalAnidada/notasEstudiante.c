/*Promediar notas de un estudiante y evidenciar un mensaje segun su promedio
>=7 Promocionado, >=4 regular, <4 Reprobado
*/

#include<stdio.h>
#include<conio.h>

float nota1, nota2, nota3, promedio, suma;

int main()
{
    printf("Digitar nota 1  \n");
    scanf("%f", &nota1);
    printf("Digitar nota 2  \n");
    scanf("%f", &nota2);
    printf("Digitar nota 3  \n");
    scanf("%f", &nota3);

    suma = nota1 + nota2 + nota3;
    promedio = suma/3;
    
    if(promedio >=7)
    {
        printf("%.1f", promedio);
        printf("\n PROMOCIONADO!");
    }
    else
    {
        if(promedio >=4)
        {
            printf("%.1f", promedio);
        printf("\n REGULAR!");
        }
        else
        {
            printf("%.1f", promedio);
            printf("\n REPROBADO!");
        }
        
    }

    getch();
    return 0;
}
