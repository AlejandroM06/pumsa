#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int ej1()
{
    system("cls");

    float salario;
    printf("Cuánto es tu salario? ");
    scanf("%f", &salario);
    printf("Usted ingresó %f pesos \n", salario);
    printf("Usted ingresó %.15f pesos \n", salario);

    return 0;
}

int ej2()
{
    int numero;
    printf("Ingrese un número: ");
    scanf("%i", &numero);
    printf("Tu número es %x en hexadecimal \n", numero);
    printf("Tu número es %o en octal \n", numero);
    printf("Tu número es %i en decimal \n", numero);

    return 0;
}
int ej3()
{
    int numero, opc;
    printf("Ingrese un número: ");
    scanf("%i", &numero);

    printf("Selecciona una opción del 1 al 4: ");
    scanf("%i", &opc);

    if (opc == 1)
    {
        printf("Tu número es %x en hexadecimal \n", numero);
    }
    else if (opc == 2)
    {
        printf("Tu número es %o en octal \n", numero);
    }
    else if (opc == 3)
    {
        printf("Tu número es %i en decimal \n", numero);
    }
    else
    {
        printf("Opción no válida... \n");
    }
    return 0;
}

int ej4()
{
    float dinero, intereses, ganancia;
    printf("Cuál es tu capital a invertir? ");
    scanf("%f", &dinero);
    printf("Cuántos intereses te pagan?");
    scanf("%f", &intereses);

    if (intereses >= 15)
    {
        printf("Me quedó en este banco :D\n");
        ganancia = dinero * intereses / 100;
        printf("Con este banco ganas %f pesos", ganancia);
    }
    else
    {
        printf("Cambia de banco urgentemente :(\n");
    }
    return 0;
}
void kk()
{
    printf("For what is a man, what has he got?\n");
    system("pause");
    system("cls");
}
void kk1()
{
    printf("If not himself, then he has naght\n");
    system("pause");
    system("cls");
}
void kk2()
{
    printf("To say the things he truly feels and not the words of one who kneels\n");
    system("pause");
    system("cls");
}
void kk3()
{
    printf("\nThe record shows I took the blows...\n");
    system("pause");
    system("cls");
}
int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    ej1();
    kk();
    ej2();
    kk1();
    ej3();
    kk2();
    ej4();
    kk3();  
    return 0;
}