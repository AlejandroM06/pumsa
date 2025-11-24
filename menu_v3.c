#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int impEquipo(int L, int W)
{
    if (L == 9 && W == 6)
    {
        printf("Fundamentos de programación");
        return strlen("Fundamentos de programación") - 1;
    }
    else if (L == 10 && W == 6)
    {
        printf("Práctica X: X");
        return strlen("Práctica X: X") - 1;
    }
    else if (L == 11 && W == 6)
    {
        printf("Sección d02");
        return strlen("Sección d02") - 1;
    }
    else if (L == 12 && W == 6)
    {
        printf("Equipo 04");
        return strlen("Equipo 04");
    }
    else if (L == 13 && W == 6)
    {
        printf("Montes Dominguez Alejandro");
        return strlen("Montes Dominguez Alejandro");
    }
    else if (L == 14 && W == 6)
    {
        printf("Orozco Garcia Jorge Clemente");
        return strlen("Orozco Garcia Jorge Clemente");
    }
    else if (L == 15 && W == 6)
    {
        printf("Ramirez Tule David");
        return strlen("Ramirez Tule David");
    }
    else if (L == 16 && W == 6)
    {
        printf("Ramirez Velazquez Denner Adrian");
        return strlen("Ramirez Velazquez Denner Adrian");
    }
    return 0;
}

int main(void)
{
    system("chcp 65001 > nul");
    // setlocale(LC_ALL, "Spanish_Mexico");

    int ancho = 110;
    int alto = 20;
    int L, W;

    const char *opc[] = {
        "Ejercicio 1.",
        "Ejercicio 2.",
        "Ejercicio 3.",
        "Salir."};
    int totalOpc = sizeof(opc) / sizeof(opc[0]);
    int opcSeleccion = 0;
    int salir = 0;

    while (!salir)
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
                else if (L == 1 && W == 2)
                {
                    printf("Menu de opciones.");
                    W += strlen("Menu de opciones.") - 1;
                }
                else if (L == 2 && W == 2)
                {
                    printf("Utiliza las flechas 'ARRIBA' y 'ABAJO' para seleccionar la opcion que quieras y pulsa ENTER para ingresar.");
                    W += strlen("Utiliza las flechas 'ARRIBA' y 'ABAJO' para seleccionar la opcion que quieras y pulsa ENTER para ingresar.") - 1;
                }
                else if (L >= 4 && L <= 7 && W == 6)
                {
                    int indc = L - 4;
                    if (indc < totalOpc)
                    {
                        if (indc == opcSeleccion)
                        {
                            printf(">> %s <<", opc[indc]);
                            W += strlen(opc[indc]) + 5;
                        }
                        else
                        {
                            printf("   %s", opc[indc]);
                            W += strlen(opc[indc]) + 2;
                        }
                    }
                }
                else
                {
                    int recup = impEquipo(L, W);
                    if (recup > 0)
                    {
                        W += recup - 1;
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                W++;
            }
            printf("\n");
            L++;
        }

        int tecla = _getch();
        switch (tecla)
        {
        case 72:
            opcSeleccion--;
            if (opcSeleccion < 0)
                opcSeleccion = totalOpc - 1;
            break;
        case 80:
            opcSeleccion++;
            if (opcSeleccion >= totalOpc)
                opcSeleccion = 0;
            break;
        case 13:
            system("cls");
            switch (opcSeleccion)
            {
            case 0:
                printf("Estamos en el ejercicio 1\n");
                {
                    int E = 9;
                    while (E <= 16)
                    {
                        impEquipo(E, 6);
                        printf("\n");
                        E++;
                    }
                }
                break;
            case 1:
                printf("Estamos en el ejercicio 2\n");
                {
                    int E = 9;
                    while (E <= 16)
                    {
                        impEquipo(E, 6);
                        printf("\n");
                        E++;
                    }
                }
                break;
            case 2:
                printf("Estamos en el ejercicio 3\n");
                {
                    int E = 9;
                    while (E <= 16)
                    {
                        impEquipo(E, 6);
                        printf("\n");
                        E++;
                    }
                }
                break;
            case 3:
                printf("Presiona cualquier tecla para salir... \n");
                salir = 1;
                break;
            }
            if (!salir)
            {
                int teclasUnic = 0;
                printf("\nPresione 'ARRIBA' o 'ABAJO' para continuar...");
                while (teclasUnic != 72 && teclasUnic != 80)
                {
                    teclasUnic = _getch();
                }
            }
            break;
        }
    }
    return 0;
}
