/* Confeccionar un programa que permita la carga de valores enteros por teclado. 
Luego de ingresar el valor mostrar un mensaje por pantalla que pida confirmar al 
usuario si desea cargar otro valor ingresando los operaciones 's' o 'n'. 
Mostrar al final la suma de los valores ingresados.
*/

#include<stdio.h>
#include<conio.h>

int main()
{

    float valor = 0;
    char continua;
    char selec;
    float suma = 0;
    float total;

    printf("El programa nos permite ver la suma de los valores ingresados hasta seleccionar no, para entregar el valor total \n");

    do
    {
        printf("Digitar el valor: ");
        scanf("%f", &valor);
        total = valor + total;
        printf("Desea cargar otro valor? [s/n]:  ");
        scanf(" %c", &selec);
        //scanf(" %c", &continua);  // verificacion de escritura al ver que no funcionaba, estaba exactamente igual.
    } while (selec == 's'); //si dejamos solo la palabra sel, no cargaba ningun dato. al cambiar por selec, el programa no envio mas erores.
                            // despues de cambiar el nombre de la vaiable tipo char, todo empezo a funcionar bien, es extraño.
/*
do {
        printf("Ingrese un valor entero:");
        scanf("%i",&valor);
        suma=suma+valor;
        printf("Desea cargar otro valor [s/n]:");
        scanf(" %c",&continua);
    } while(continua=='s');   

*/
    printf("La suma total de los valores es: \n");
    printf("%0.2f", total);

    getch();
    return 0;
}