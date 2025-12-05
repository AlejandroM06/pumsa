#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void causa(int c);
void parce(int i, int e);
void Map(int f);

int main(int c, int i, int e, int f)
{
    system("chcp 65001 > nul");
    system("cls");
    causa(c);
    printf("\n\n\n");
    parce(i, e);
    printf("\n\n\n");
    Map(f);

    return 0;
}

void causa(int c)
{
    c = 10;

    printf("Cuenta Regresiva:\n");

    while (c > 0)
    {
        printf("%d...\n", c);
        c--;
    }

    printf("¡Tururu ruru!\n");
}

void parce(int i, int e)
{
    i;
    e = 10;

    for (i = 1; i <= e; i++)
    {
        printf("Contador: %d\n", i);
    }
}

void Map(int f)
{
    f = 0;

    for (f = 0; f <= 10; f++)
    {
        printf("Cumalala cumalala: %d \n", f);
    }
}