#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int opc = 0;
    int num1 = 0;
    int num2 = 0;
    while (opc != 6)
    {
        system("cls");
        printf("==========================\n");
        printf("=MENU DE OPCIONES        =\n");
        printf("==========================\n");
        printf("=1. Ingrese los valores  =\n");
        printf("=2. Sumar                =\n");
        printf("=3. Restar               = \n");
        printf("=4. Multiplicar          =\n");
        printf("=5. Dividir              =\n");
        printf("=6. Salir...             =\n");
        printf("==========================\n\n");
        printf("=Opcion a escoger:");

        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            system("cls");
            printf("Ingrese el primer valor: ");
            scanf("%d", &num1);
            printf("Ingrese el segundo valor: ");
            scanf("%d", &num2);
            break;
        case 2:
            system("cls");
            printf("La suma de %d + %d es: %d \n", num1, num2, num1 + num2);
            system("pause");
            break;
        case 3:
            system("cls");
            printf("La resta de %d - %d es: %d \n", num1, num2, num1 - num2);
            system("pause");
            break;
        case 4:
            system("cls");
            printf("La multiplicacion de %d * %d es: %d \n", num1, num2, num1 * num2);
            system("pause");
            break;
        case 5:
            system("cls");
            if (num2 != 0)
                printf("La division de %d / %d es: %.2f \n", num1, num2, (float)num1 / num2);
            else
                printf("Error: No se puede dividir entre 'cero'\n");
            system("pause");
            break;
        case 6:
            system("cls");
            printf("FIN...\n");
            printf("Presiona cualquier tecla para salir\n\n");
            break;
        default:
            system("cls");
            printf("La opcion que ingreso es incorrecta...");
            system("pause");
            break;
        }
    }

    return 0;
}
