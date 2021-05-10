/*
Confeccionar un programa que solicite la carga de dos valores enteros por teclado. 
Luego solicitar que se cargue alguno de los operaciones: '+', '-', '*' o '/'.
Según el operacion ingresado proceder a mostrar la sumar, resta, multiplicación o división 
de los valores ingresados.
*/

#include<stdio.h>
#include<conio.h>

float valor1;
float valor2;
float total;
char operacion;
char selec;

int main()
{
    

    printf("Calculadora dos cifras, cuatro operadores \n");

    do
    {
        printf("Digitar el primer valor: \n");
        scanf("%f", &valor1);
        printf("Digitar el segundo valor: \n");
        scanf("%f",&valor2);
        printf("Digite la operacion que desea realizar [+, -, *, /]: ");
        scanf(" %c", &operacion);
        //scanf(" %c", &selec);     //Al poner este comendo almismo tiempo, el programa empezó a funcionar correctamente, deben ser
                                    // errores del lenguaje de programacion, al borrarlo, ya todo quedó funcionando.

        if(operacion == '+')
        {
            total = valor1 + valor2;
        }
        else if(operacion == '-')
        {
            total = valor1- valor2;
        }
        else if(operacion == '*')
        {
            total = valor1 * valor2;
        }
        else if(operacion == '/')
        {
            total = valor1 / valor2;
        }
        else
        {
            printf("El operador seleccionado es incorrecto");
        }
        printf("El resultado es: \n");
        printf("%0.2f", total);
        printf("\n");
        printf("Desea realizar otra operacion? [s/n]");
        scanf(" %c", &selec);
    
    }while(selec == 's');
    

    getch();
    return 0;
}