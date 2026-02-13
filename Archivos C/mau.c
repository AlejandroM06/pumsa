#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

#define F_YELLOW_EX "\x1b[93m"
#define F_GREEN_EX "\x1b[92m"
#define F_BLUE_EX "\x1b[94m"
#define F_RED_EX "\x1b[91m"
#define F_MAGENTA_EX "\x1b[95m"
#define F_ROSE "\x1B[38;2;255;151;203m"
#define F_CYAN_EX "\x1b[96m"
#define F_GRAY_EX "\x1b[90m"
#define F_RESET "\x1b[0m"

int w;
int l;
int alto = 70;
int ancho = 20;

char equipo();
void menu();

int main()
{
    system("chcp 65001 > nul");
    menu();
    return 0;
}

char equipo()
{
    if (l == 9 || w == 6)
    {
        printf("Alejandro Montes Domínguez");
        return strlen("Alejandro Montes Domínguez");
    }
}

void menu()
{
    CONSOLE_SCREEN_BUFFER_INFO pops;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_INPUT_HANDLE), &pops))
    {
        alto = pops.srWindow.Right - pops.srWindow.Left + 1;
        ancho = pops.srWindow.Bottom - pops.srWindow.Top + 1;
    }
    else
    {
        alto = 70;
        ancho = 20;
    }
    const char *opc[] = {
        "Opción 1.",
        "Opción 2.",
        "Opción 3.",
        "Opción 4.",
        "Opción 5.",
        "Salir."};
    int totalOpc = sizeof(opc) / sizeof(opc[0]);
    int opcSelect = 0;
    int salir = 0;

    while (!salir)
    {
        if (GetConsoleScreenBufferInfo(GetStdHandle(STD_INPUT_HANDLE), &pops))
        {
            alto = pops.srWindow.Right - pops.srWindow.Left + 1;
            ancho = pops.srWindow.Bottom - pops.srWindow.Top + 1;
        }
        else
        {
            alto = 70;
            ancho = 20;
        }
        system("cls");
        l = 0;
        while (l < alto)
        {
            w = 0;
            while (w < ancho)
            {
                if (l == 0 || l == alto - 1)
                    printf("=");
                else if (w == 0 || w == ancho - 1)
                    printf("|");
                else if (l == 1 && w == 2)
                {
                    printf("Menú de Opciones.");
                    w += strlen("Menú de opciones." - 1);
                }
                w++;
            }
            l++;
        }
    }
}