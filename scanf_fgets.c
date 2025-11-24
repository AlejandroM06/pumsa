#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <string.h>

float suma()
{
    float a;
    float b;
    float c = 10.406456;
    float r;

    printf("Escribe el valor de 'a': ");
    scanf("%f", &a);
    printf("Escribe el valor de 'b': ");
    scanf("%f", &b);
    r = a + b;
    printf("El valor de 'a' es: %.3f \n", a);
    printf("El valor de 'b' es: %.3f \n", b);
    printf("El valor de 'c' es: %.4f \n", c);
    return r;
}

void Cnombre()
{
    char nombre[50];
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
    printf("Dame tu nombre: ");
    fgets(nombre, 50, stdin);
    nombre[strcspn(nombre, "\n")] = '\0';
    printf("Escribiste: %s \n", nombre);
}
int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Spanish_Mexico");

    char A[20];
    strcpy(A, "Ya es toda we");
    printf("Esta es la suma de 'a' y 'b':  %f \n", suma());
    Cnombre();
    printf("%s", A);
    return 0;
}
