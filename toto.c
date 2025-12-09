#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

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
        scanf("%d", &opc);
        system("cls");
        switch (opc)
        {
        case 1:
            contador();
            printf("\n");
            break;

        case 2:
            pregunta();
            break;

        case 3:
            decision();
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

void contador()
{
    int a = 0;
    int i;
    printf("Checa we, un contador así bien tryhard\n");
    for (i = 0; i <= 5; i++)
    {
        printf("%d \n", i);
    }
    printf("Otro pero ahora en fila: ");
    while (a <= 5)
    {
        printf("%d ", a);
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

        printf("Tu gato gordo tiene el número %d, ingresa su nombre: ", n + 1);
        fgets(c1[n].nombre, sizeof(c1->nombre), stdin);
        c1[n].nombre[strcspn(c1[n].nombre, "\n")] = '\0';
        system("cls");
        printf("Ingrese el peso de %s en kg: ", c1[n].nombre);
        scanf("%f", &c1[n].peso);
        while (getchar() != '\n')
            ;
        system("cls");
    }
    printf("Lista de michis gordos\n");
    for (int n = 0; n < 3; n++)
    {
        printf("El gato gordo número %d se llama %s y pesa %.2f kg\n", n + 1, c1[n].nombre, c1[n].peso);
    }
}

void decision()
{
    int mam;
    printf("Ingrese su nivel de mamposidad del 1 al 5, siendo 1 poco mampo, y 5 muy mampo: ");
    scanf("%d", &mam);
    while (getchar() != '\n')
        ;
    system("cls");
    if (mam > 0 && mam <= 3)
    {
        printf("Usted es regularmente mampo, le recomiendo dejar de ver hombres peludos \n");
    }
    else if (mam >= 4 && mam <= 5)
    {
        printf("Usted ya no tiene cura, le gusta el coyolito tierno \n");
    }
    else
    {
        printf("A parte de Mampo, pendejo. ¿Qué parte de que es de 1 a 5 no entendió? Simio en brama \n");
        system("pause");
        system("cls");
        decision();
    }
}