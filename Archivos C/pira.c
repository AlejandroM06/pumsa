#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void piramideInvertida(int n);

void piramideNormal(int filas);

void piramideInvertidaMejorada(int n);

void imprimirEspacios(int n);
void imprimirAsteriscos(int n);

int main()
{
    system("chcp 65001 > nul");
    int n;
    system("cls");
    printf("Introduce número de filas de las piramides: ");
    scanf("%d", &n);
    printf("\npiramide invertida \n");
    piramideInvertida(n);
    printf("\n");
    piramideInvertidaMejorada(n);
    printf("\n");
    piramideNormal(n);
    printf("piramide normal \n");
    return 0;
}

void piramideInvertida(int n)
{
    int largo, alto;
    alto = n;
    while (alto >= 0)
    {
        largo = 0;
        while (largo < n - alto)
        {
            printf(" ");
            largo++;
        }
        largo = 0;
        while (largo < (2 * alto - 1))
        {
            printf("*");
            largo++;
        }
        alto--;
        if (alto > 0)
        {
            printf("\n");
        }
    }
}

void imprimirEspacios(int n)
{
    int i = 1;
    while (i <= n)
    {
        printf(" ");
        i++;
    }
}
void imprimirAsteriscos(int n)
{
    int i = 1;
    while (i <= n)
    {
        printf("*");
        i++;
    }
}

void piramideNormal(int filas)
{
    int filaActual = 1;
    int columnas = 2 * filas - 1;
    int asteriscos = 0;
    int diferencia = 0;
    int espacios = 0;

    while (filaActual <= filas)
    {
        asteriscos = 2 * filaActual - 1;
        diferencia = columnas - asteriscos;
        espacios = diferencia / 2;
        imprimirEspacios(espacios);
        imprimirAsteriscos(asteriscos);
        imprimirEspacios(espacios);
        filaActual = filaActual + 1;
        printf("\n");
    }
}

void piramideInvertidaMejorada(int n)
{
    int a = n;
    while (a >= 0)
    {
        imprimirEspacios(n - a);
        imprimirAsteriscos(2 * a - 1);
        a--;
        if (a > 0)
        {
            printf("\n");
        }
    }
}