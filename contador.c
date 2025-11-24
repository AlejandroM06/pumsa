#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void causa();
void parce();

int main()
{
    int c;
    system("chcp 65001 > nul");
    system("cls");
    causa();
    printf("\n\n\n");
    parce();

    return 0;
}

void causa()
{
    int c = 10;

    printf("Cuenta Regresiva:\n");

    while (c > 0)
    {
        printf("%d...\n", c);
        c--;
    }

    printf("¡Lanzamiento!\n");
}

void parce()
{
    int c;          
    int l = 10;

    for (c = 1; c <= l; c++)
    {
        printf("Contador: %d\n", c);
    }
}