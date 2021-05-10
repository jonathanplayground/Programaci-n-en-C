/*
Realizar un programa que solicite la carga de la edad y sexo de dos personas. 
Luego mostrar la edad y sexo de la persona mayor. Para almacenar el sexo definir 
variables de tipo char donde se almacenará el caracter 'm' o 'f' indicando si 
es del sexo masculino o femenino
*/

#include<stdio.h>
#include<conio.h>

int edad[2];
char sexo;
char selec;
int i;
int mayor =0;
char sexoF[2];

int main()
{
    printf("El programa permite ingresar edad y sexo de dos personas, imprime la edad y sexo de la persona mayor.");
    printf("\n");
    for(i=0; i<2; i++)
    {
        printf("Digital la edad de la persona: %i", i);
        printf("\n");
        scanf("%i", &edad[i]);
        //printf("\n");
        printf("Digitar el sexo de la persona: %i", i);
        printf("\n");
        //scanf("%c", &sexo);   // si eleminamos esta linea el programa no funciona!! 
        scanf(" %c", &selec);   //importante el espacio en blanco entre las primeras comillas y el signo procentaje --> (" %c"... )
        sexoF[i] = selec;
    }
    i=0;
    if(edad[i+1]<edad[i])
    {
        mayor = edad[i];
        sexo = sexoF[i];
    }
    else
    {
        mayor=edad[i+1];
        sexo = sexoF[i+1];
    }
    
    printf("La persona mayor tiene: %i", mayor);
    printf("\n");

    if(sexo == 'm')
    {
        printf("El sexo de la persona es masculino");    
    }
    else if (sexo == 'f')
    {
        printf("El sexo de la persona es femenino");
    }
    else
    {
        printf("El sexo no fue digitalizado de la manera correcta");
    }
    
    getch();
    return 0;
    
}