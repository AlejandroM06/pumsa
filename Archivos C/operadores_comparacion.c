#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Spanish_Mexico");
    int a, B;
    a = 3;
    B = 20;
    printf("El valor de 'a' es %i \n", a);
    printf("El valor de 'B' es %i \n", B);
    printf("'a' es mayor que 'B'? %i \n", a > B);
    printf("'a' es menor que 'B'? %i \n", a < B);
    printf("'a' es igual que 'B'? %i \n", a == B);
    printf("'a' es mayor o igual que 'B'? %i \n", a >= B);
    printf("'a' es menor o igual que 'B'? %i \n", a <= B);
    printf("'a' es diferente que 'B'? %i \n", a != B);
    printf("'Cero' indica Nowe, 'uno' indica Siwe \n");

    return 0;
}
