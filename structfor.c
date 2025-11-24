#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void info();

int main()
{
    system("chcp 65001 > nul");
    system("cls");
    info();
    return 0;
}
void info()
{
    struct Mampo
    {
        char nombre[100];
        int edad;
        int NiveldeMampo;
    };

    struct Mampo weyes[5];
    memset(weyes, 0, sizeof(weyes));

    for (int m = 0; m < 5; m++)
    {
        printf("Escriba el nombre de la persona mampa %i: ", m + 1);
        fgets(weyes[m].nombre, 100, stdin);
        weyes[m].nombre[strcspn(weyes[m].nombre, "\n")] = '\0';
        system("cls");
        printf("Ingrese la edad del mampo %s: ", weyes[m].nombre);
        scanf("%i", &weyes[m].edad);
        while (getchar() != '\n')
            ;
        system("cls");
        printf("Ingresa el nivel de Mampo de %s del 1 al 10: ", weyes[m].nombre);
        scanf("%i", &weyes[m].NiveldeMampo);
        while (getchar() != '\n')
            ;
        system("cls");
        if (weyes[m].NiveldeMampo < 1 || weyes[m].NiveldeMampo > 10)
        {
            system("cls");
            printf("Por favor ingresa solo valores válidos (1-10)... \n");
            printf("Se reiniciará la captura de datos de este mampo.\n");
            system("pause");
            system("cls");
            memset(&weyes[m], 0, sizeof(weyes[m]));
            if (m >= 0)
            {
                m--;
            }
            continue;
        }
    }
    printf("Lista de personas mampas\n");
    for (int m = 0; m < 5; m++)
    {
        printf("%s tiene %i años y su nivel de Mamposidad es: %i. \n", weyes[m].nombre, weyes[m].edad, weyes[m].NiveldeMampo);
    }
}