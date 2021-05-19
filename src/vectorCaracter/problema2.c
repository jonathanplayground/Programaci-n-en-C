/*
Cargar los nombres de dos personas y sus edades. 
Mostrar el nombre de la persona que tiene mayor edad. 
Los nombres de las personan no superan los 20 caracteres.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char personaA[20];
    char personaB[20];
    char persona[20];
    int edadA;
    int edadB;
    int mayor;

    printf("El programa permite cargar dos personas, con nombre y edad, se mostrara la persona con edad mayor  \n");
    printf("Digitar el nombre de la primera persona:  \n");
    gets(personaA);
    printf("Digitar la edad:  \n");
    scanf("%i", &edadA);
    fflush(stdin);      //luego de cargar la edadA mediante la función scanf queda 
                        //en el buffer de teclado el valor de la tecla "enter", luego para eliminarlo y
                        //que no se cargue en la siguiente variable debemos llamar a la función fflush:
                        //Si probamos de no llamar a la función fflush podremos comprobar que en la variable 
                        //"personaB" se carga una cadena vacía. --> verificado!! 
    printf("Digitar el nombre de la segunda persona:  \n");
    gets(personaB);
    printf("Digitar la edad:  \n");
    scanf("%i", &edadB);

    if (edadA < edadB)
    {
        /*
        mayor = edadB;
        persona = PersonaB;     // revisar cómo se otorga la variable vector en otro vector
        */
        printf("Nombre de la persona mayor: \n");
        printf("%s", personaB);
        printf("\n");
        printf("Edad: \n");
        printf("%i", edadB);
    }
    else
    {
        if(edadA>edadB)
        {
            /*
            mayor = edadA;
            persona = personaA;
            */
            printf("Nombre de la persona mayor: \n");
            printf("%s", personaA);
            printf("\n");
            printf("Edad: \n");
            printf("%i", edadA);
        }
        else
        {
            printf("Tienen la misma edad: \n");
        }

    }

    /*
    printf("Nombre de la persona mayor: \n");
    printf("%s", persona);
    printf("Edad: \n");
    printf("%i", mayor);
    */
    getch();
    return 0;
}