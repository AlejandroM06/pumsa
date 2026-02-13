#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001 > nul");

    float a = 3;
    float B = 20;
    float R = pow(B, a);
    float P = sqrt(B);
    float L = (B / a);
    float R1 = 5 * 2 / 5 - a;
    float R2 = 5 * (2 / 5) - a;
    int A = 3;
    int b = 20;
    int M = b % A;
    printf("caballo burro\n");
    printf("caballo burro 2\n");
    printf("La suma es................= %0.1f\n", a + B);
    printf("La suma es................= %0.1f\n", 100 + B);
    printf("La resta es...............= %0.1f\n", a - B);
    printf("La resta es...............= %0.1f\n", B - a);
    printf("La multiplicaci�n es......= %0.1f\n", a * B);
    printf("La divici�n es............= %0.1f\n", L);
    printf("El exponente es...........= %0.1f\n", R);
    printf("La ra�z es................= %0.1f\n", P);
    printf("El m�dulo es..............= %i\n", M); // parte entera del residuo de la división
    printf("El primer resultado es....= %0.1f\n", R1);
    printf("El segundo resultado es...= %0.1f\n", R2);
    return 0;
}
