#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void menu()
{
    int ancho = 80;
    int alto = 20;
    int L, W;
    int opc = -1;

    while (opc != 4)
    {
        system("cls");
        L = 0;
        while (L < alto)
        {
            W = 0;
            while (W < ancho)
            {
                if (L == 0 || L == alto - 1)
                    printf("=");
                else if (W == 0 || W == ancho - 1)
                    printf("|");
                else if (L == 2 && W == 6)
                {
                    printf("Menu de opciones.");
                    W += strlen("Menu de opciones.") - 1;
                }
                else if (L == 4 && W == 6)
                {
                    printf("1-Ejercicio 1.");
                    W += strlen("1-Ejercicio 1.") - 1;
                }
                else if (L == 5 && W == 6)
                {
                    printf("2-Ejercicio 2.");
                    W += strlen("2-Ejercicio 2.") - 1;
                }
                else if (L == 6 && W == 6)
                {
                    printf("3-Ejercicio 3.");
                    W += strlen("3-Ejercicio 3.") - 1;
                }
                else if (L == 7 && W == 6)
                {
                    printf("4-Salir.");
                    W += strlen("4-Salir.") - 1;
                }
                else if (L == 9 && W == 6)
                {
                    printf("Alejandro");
                    W += strlen("Alejandro") - 1;
                }
                else
                    printf(" ");
                W++;
            }
            printf("\n");
            L++;
        }
        printf("\nElige una opcion y pulsa la tecla ENTER para continuar: ");
        scanf("%i", &opc);
        system("cls");
        switch (opc)
        {
        case 1:
            int i;
            printf("Estamos en el ejercicio 1\n");
            for (i = 0; i <= 20; i++)
            {
                printf("Contador: %d \n", i);
            }
            break;

        case 2:
            printf("Estamos en el ejercicio 2 \n");
            int e = 0;
            while (e <= 10)
            {
                printf("Otro contador jaja: %d \n", e);
                e++;
            }
            break;

        case 3:
            float num;
            printf("Estamos en el ejercicio 3\n");
            printf("Dame un número: ");
            scanf("%f", &num);
            if (num > 20)
            {
                printf("Mayor a 20\n");
            }
            else
            {
                printf("Menor a 20\n");
            }
            break;

        case 4:
            printf("\nPresiona cualquier tecla para salir... \n");
            break;

        default:
            printf("Ingresa una opcion valida. \n\n");
        }
        if (opc != 4)
        {
            system("pause");
        }
    }
}

int main()
{
    system("chcp 65001 > nul");
    menu();
    return 0;
}