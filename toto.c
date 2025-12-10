#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define F_YELLOW_EX "\x1b[93m"
#define F_GREEN_EX "\x1b[92m"
#define F_BLUE_EX "\x1b[94m"
#define F_RED_EX "\x1b[91m"
#define F_MAGENTA_EX "\x1b[95m"
#define F_ROSE "\x1B[38;2;255;151;203m"
#define F_CYAN_EX "\x1b[96m"
#define F_GRAY_EX "\x1b[90m"
#define F_RESET "\x1b[0m"

void menu();
void contador();
void pregunta();
void decision();

int main()
{
    system("chcp 65001 > nul");
    menu();
    return 0;
}
void menu()
{
    int ancho = 50;
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
                    printf(F_BLUE_EX "=" F_RESET);
                else if (W == 0 || W == ancho - 1)
                    printf(F_GREEN_EX "|" F_RESET);
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
        printf("\nElige una opcion y pulsa la tecla ENTER para continuar:" F_YELLOW_EX " ");
        scanf("%d", &opc);
        system("cls");
        switch (opc)
        {
        case 1:
            contador();
            printf(F_CYAN_EX "\n");
            break;

        case 2:
            pregunta();
            break;

        case 3:
            decision();
            break;

        case 4:
            printf(F_CYAN_EX "\nPresiona cualquier tecla para salir... \n" F_RESET);
            break;

        default:
            printf(F_RESET "Ingresa una opcion valida. \n\n");
        }
        if (opc != 4)
        {
            printf(F_CYAN_EX "");
            system("pause");
        }
    }
}

void contador()
{
    int a = 0;
    int i;
    printf(F_MAGENTA_EX "Checa we, un contador así bien tryhard\n" F_RESET);
    for (i = 0; i <= 5; i++)
    {
        printf(F_RED_EX "%d \n" F_RESET, i);
    }
    printf(F_ROSE "Otro pero ahora en fila: " F_RESET);
    while (a <= 5)
    {
        printf(F_BLUE_EX "%d " F_RESET, a);
        a++;
    }
}

void pregunta()
{
    typedef struct Gato
    {
        char nombre[100];
        float peso;
    } cat;

    cat c1[3];
    memset(&c1, 0, sizeof(cat));
    while (getchar() != '\n' && getchar() != EOF)
        ;
    for (int n = 0; n < 3; n++)
    {

        printf(F_GREEN_EX"Tu gato gordo tiene el número %d, ingresa su nombre:"F_GRAY_EX" ", n + 1);
        fgets(c1[n].nombre, sizeof(c1->nombre), stdin);
        c1[n].nombre[strcspn(c1[n].nombre, "\n")] = '\0';
        system("cls");
        printf(F_GREEN_EX"Ingrese el peso de %s en kg:"F_GRAY_EX" ", c1[n].nombre);
        scanf("%f", &c1[n].peso);
        while (getchar() != '\n')
            ;
        system("cls");
    }
    printf(F_GREEN_EX"Lista de michis gordos\n");
    for (int n = 0; n < 3; n++)
    {
        printf(F_GREEN_EX"El gato gordo número "F_GRAY_EX"%d "F_GREEN_EX"se llama "F_GRAY_EX"%s "F_GREEN_EX"y pesa "F_GRAY_EX"%.2f kg\n", n + 1, c1[n].nombre, c1[n].peso);
    }
}

void decision()
{
    int mam;
    printf(F_BLUE_EX "Ingrese su nivel de mamposidad del 1 al 5, siendo 1 poco mampo, y 5 muy mampo: ");
    scanf("%d", &mam);
    while (getchar() != '\n')
        ;
    system("cls");
    if (mam > 0 && mam <= 3)
    {
        printf(F_GREEN_EX "Usted es regularmente mampo, le recomiendo dejar de ver hombres peludos \n");
    }
    else if (mam >= 4 && mam <= 5)
    {
        printf(F_RED_EX "Usted ya no tiene cura, le gusta el coyolito tierno\n");
    }
    else if (mam == 67)
    {
        printf(F_GRAY_EX "¿Esa perra mamada qué?\n" F_CYAN_EX);
        system("pause");
        system("cls");
        decision();
    }
    else
    {
        printf(F_CYAN_EX "A parte de Mampo, pendejo. ¿Qué parte de que es de 1 a 5 no entendió? Simio en brama \n");
        system("pause");
        system("cls");
        decision();
    }
}