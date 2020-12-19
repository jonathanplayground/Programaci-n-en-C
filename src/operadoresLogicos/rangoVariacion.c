/*Escribir un programa en el cual: dada una lista de tres 
valores numéricos distintos se calcule e informe su rango 
de variación (debe mostrar el mayor y el menor de ellos)
*/

#include<stdio.h>
#include<conio.h>

float num1, num2, num3;

int main()
{
    printf("Digitar numero 1 \n");
    scanf("%f", &num1);
    printf("Digitar numero 2 \n");
    scanf("%f", &num2);
    printf("Digitar numero 3 \n");
    scanf("%f", &num3);
    
    float suma = num1 + num2 + num3;
    float promedio = suma/3;

    float variancion1 = (num1-promedio)*(num1-promedio);
    float variancion2 = (num2-promedio)*(num2-promedio);
    float variancion3 = (num3-promedio)*(num3-promedio);

    float rango = (variancion1+ variancion2+ variancion3)/2;
    printf("\n v1 %f", variancion1);
    printf("\n v2 %f", variancion2);
    printf("\n v3 %f", variancion3);
    printf("\n Rango de variacion %f", rango);
    printf("\n suma %f", suma);
    printf("\n Pormedio: %f \n", promedio);

    if(num1>num2 && num1>num3)
    {
        if(num2>num3)
        {
            printf("\n numero mayor %f \n", num1);
            printf("\n numero menor %f \n", num3);
        }
        else
        {
            printf("\n numero mayor %f \n", num1);
            printf("\n numero menor %f \n", num2);    
        }
    }
    else if (num2>num1 && num2>num3)
    {
        if(num1>num3)
        {
            printf("\n numero mayor %f \n", num2);
            printf("\n numero menor %f \n", num3); 
        }
        else
        {
            printf("\n numero mayor %f \n", num2);
            printf("\n numero menor %f \n", num1); 
        }
    }
    else if(num3>num2 && num3 >num1)
    {
        if(num2>num1)
        {
            printf("\n numero mayor %f \n", num3);
            printf("\n numero menor %f \n", num1); 
        }
        else
        {
            printf("\n numero mayor %f \n", num3);
            printf("\n numero menor %f \n", num2); 
        }
    }
    

    getch();
    return 0;
}