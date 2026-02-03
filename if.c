#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/* int ej1()
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
    printf("If not himself, then he has naught\n");
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
} */

void pedirCalificacion();

int main()
{
    
    setlocale(LC_ALL, "es_ES.UTF-8");
    pedirCalificacion();
    /*ej1();
    kk();
    ej2();
    kk1();
    ej3();
    kk2();
    ej4();
    kk3();  */
    return 0;
}

void pedirCalificacion()
{   
    float materia1; 
    float materia2; 
    float materia3;
    float sumaMaterias;
    float promedio;

    system("cls");
    printf("Si captura un dato fuera del rango de 0 a 100, su captura de datos se reiniciará.\n");
    system("pause");
    system("cls");
    printf("Calificación de la primer materia: \n");
    scanf("%f", &materia1);
    if (materia1 < 0 || materia1 > 100){
       return pedirCalificacion();
    }
    system("cls");
    printf("Calificación de la segunda materia: \n");
    scanf("%f", &materia2);
    if (materia2 < 0 || materia2 > 100){
        return pedirCalificacion();
    }
    system("cls");
    printf("Calificación de la tercer materia: \n");
    scanf("%f", &materia3);
    if (materia3 < 0 || materia3 > 100){
        return pedirCalificacion();
    }
    system("cls");

    sumaMaterias = materia1 + materia2 + materia3;
    promedio = sumaMaterias / 3;

    if (promedio < 70.00){
        printf("Su promedio es menor a 70.00. Está reprobado");
    }
    else {
        printf("Su promedio es %.2f. Usted hacaprobado la materia :)", promedio);
    }
}