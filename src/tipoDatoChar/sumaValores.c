/* Realizar la carga de valores enteros por teclado y sumarlos. 
Cada vez que se carga un valor pedir al operador que ingrese si quiere 
cargar otro valor ingresando una 's' o 'S' (minúscula o mayúscula)
*/

#include<stdio.h>
#include<conio.h>


int main()

{
    int valor;
    int suma = 0;
    char continuar;
    char selec;

    printf("El programa suma los valores ingresados. \n");

    do
    {
        printf("Digitar el valor: ");
        scanf("%i", &valor);
        printf("\n");
        suma = valor + suma;
        printf("Si desea continuar presione s o S:  ");
        //scanf("%c", &continuar);        // ES NOTABLE QUE NECESITAMOS DOS VARIABLES TIPO CHAR PARA LOGRAR
        scanf(" %c", &selec);           //EJECUTAR EL PROGRAMA CORRECTAMENTE, PUEDE SER UN ERROR DEL CODIGICADOR.
                                        //SI ELIMINAMOS scanf("%c", &continuar); EL PROGRAMA NO FUNCIONA!
    
            /*importante, si dejamos scanf(" %c", &selec), con la variable (" %c".. separada un espacio de las
            comillas, el error anterior no aparece, debemos probar en futuros proyectos, esta descripcion.

            Error encontrado.
            Para la carga de un valor de tipo char por teclado empleamos la función scanf 
            y en el primer parámetro indicamos en la cadena de formato que se trata de un 
            caracter el dato a ingresar " %c" y será fundamental agregar un espacio en blanco 
            previo al caracter %:
            scanf(" %c",&letra3);
            */
    }while(selec == 's' || selec == 'S');        
    
    printf("La suma total es:  %i", suma );
    getch();
    return 0;
}