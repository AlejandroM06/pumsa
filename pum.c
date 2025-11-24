#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void pregunta();
void pumsa();

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    pregunta();
    pumsa();
    return 0;
}

void pregunta()
{
    int mamposidad;
    printf("Qué tan mampo es pumsa del 1 al 10? ");
    scanf("%i", &mamposidad);
    system("cls");
}
void pumsa()
{
    int mamposidad;

    if (mamposidad >= 1 && mamposidad <= 10)
    {
        printf("Pumsa es un nivel %i de mamposidad.\n", mamposidad);

        if (mamposidad >= 7)
        {
            printf("¡Pumsa es muy mampo!\n");
            system("pause");
            main();
        }
        if (mamposidad <= 6)
        {
            printf("Pumsa es mampo pero no tanto. \n");
            system("pause");
            main();
        }
    }
    if (mamposidad < 1 || mamposidad > 10)
    {
        printf("Por favor ingresa un número válido entre 1 y 10.\n");
        main();
    }
}