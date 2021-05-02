/* Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y cuántas más bajas.
*/
/*presentamos errores en el programa al no declarar una variable (nombrada mayor) igual a cero para iniciar.
El programa arrojaba valores diferentes en el conteo, cuando la declaramos inicializada en 0 el programa
funcionó correctamente.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int mayor = 0;
    int menor = 0;
    float promedio, suma = 0;
    float alturas[5];

    printf("El programa recibe 5 alturas, entrega el promedio de alturas y la cantidad mayor y menor segun el promedio");
    printf("\n");

    for (i=0; i<5; i++)
    {
        printf("Ingesar la altura  %i", i);
        printf("\n");
        scanf("%f", &alturas[i]);
        suma = suma + alturas[i];
    }

    promedio = suma/i;

    for(i=0; i<5; i++)
    {
        if(alturas[i]>promedio)
            {
                mayor++;
            }
            else if (alturas[i]<promedio)
            {
                menor++;
            }
    }
    
    printf("promedio %f", promedio);
    printf("\n");
    printf("alturas mayores al promedio  %i", mayor);
    printf("\n");
    printf("alturas menores al promedio  %i", menor);

    getch();
    return 0;
}