#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#define F_YELLOW_EX "\x1b[93m"
#define F_GREEN_EX "\x1b[92m"
#define F_BLUE_EX "\x1b[94m"
#define F_RED_EX "\x1b[91m"
#define F_MAGENTA_EX "\x1b[95m"
#define F_ROSE "\x1B[38;2;255;151;203m"
#define F_CYAN_EX "\x1b[96m"
#define F_GRAY_EX "\x1b[90m"
#define F_RESET "\x1b[0m"

int impEquipo(int L, int W)
{
    if (L == 9 && W == 6)
    {
        printf("Montes Domínguez Alejandro");
        return strlen("Montes Dominguez Alejandro");
    }
    return 0;
}

int main(void)
{
    system("chcp 65001 > nul");

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int ancho, alto;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
    {
        ancho = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        alto = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    }
    else
    {
        ancho = 80;
        alto = 25;
    }
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
        if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
        {
            ancho = csbi.srWindow.Right - csbi.srWindow.Left + 1;
            alto = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
        }
        else
        {
            ancho = 80;
            alto = 25;
        }
        system("cls");
        L = 0;
        while (L < alto)
        {
            W = 0;
            while (W < ancho)
            {
                if (L == 0 || L == alto - 1)
                    printf(F_GREEN_EX "=" F_RESET);
                else if (W == 0 || W == ancho - 1)
                    printf(F_CYAN_EX "|" F_RESET);
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
                            printf(F_RED_EX "➤" F_BLUE_EX "  %s   " F_RESET, opc[indc]);
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