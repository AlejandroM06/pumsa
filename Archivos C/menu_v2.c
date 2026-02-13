#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void)
{
    system("chcp 65001 > nul");


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
                    printf("Alejandro Fundamentos de programación");
                    W += strlen("Alejandro Fundamentos de programación") - 2;
                }
                else if (L == 10 && W == 6)
                {
                    printf("Práctica 4: Estructuras de control 2da parte");
                    W += strlen("Práctica 4: Estructuras de control 2da parte") - 2;
                }
                else if (L == 11 && W == 6)
                {
                    printf("Sección d02");
                    W += strlen("Sección d02") - 2;
                }
                else if (L == 12 && W == 6)
                {
                    printf("Equipo 04");
                    W += strlen("Equipo 04") - 1;
                }
                else if (L == 13 && W == 6)
                {
                    printf("Montes Dominguez Alejandro");
                    W += strlen("Montes Dominguez Alejandro") - 1;
                }
                else if (L == 14 && W == 6)
                {
                    printf("Orozco Garcia Jorge Clemente");
                    W += strlen("Orozco Garcia Jorge Clemente") - 1;
                }
                else if (L == 15 && W == 6)
                {
                    printf("Ramirez Tule David");
                    W += strlen("Ramirez Tule David") - 1;
                }
                else if (L == 16 && W == 6)
                {
                    printf("Ramirez Velazquez Denner Adrian");
                    W += strlen("Ramirez Velazquez Denner Adrian") - 1;
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
            printf("Estamos en el ejercicio 1");
            break;

        case 2:
            printf("Estamos en el ejercicio 2 \n");
            break;

        case 3:
            printf("Estamos en el ejercicio 3");
            break;

        case 4:
            printf("Presiona cualquier tecla para salir... \n");
            break;

        default:
            printf("Ingresa una opcion valida. \n\n");
        }
        if (opc != 4)
        {
            printf("\nPresione ENTER para continuar...");
            getchar();
            getchar();
        }
    }
    return 0;
}
