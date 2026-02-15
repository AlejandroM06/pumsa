#include <stdio.h>

#define F_GRAY_EX "\x1b[90m"
#define F_RESET "\x1b[0m"

int main(){
    float manzanas, uvas, peras, iva, subtotal, total;
    float kiloManz, kiloUva, kiloPera;
    iva = 16 * 0.01;

    printf("FRUTERIA - EL INGE\n");
    printf("==================\n");
    printf("Ingrese el precio de 1 kg de manzanas, uvas y peras: ");
    printf(F_GRAY_EX"\n(ingrese separando los precios con una '/' )"F_RESET);
    printf("\n>> ");
    scanf("%f / %f / %f", &manzanas, &uvas, & peras);
    printf("\nIngrese el numero de kg de manzanas que desea llevar: ");
    scanf("%f", &kiloManz);
    printf("Ingrese el numero de kg de manzanas que desea llevar: ");
    scanf("%f", &kiloUva);
    printf("Ingrese el numero de kg de manzanas que desea llevar: ");
    scanf("%f", &kiloPera);
    printf("\n%.2f kg de manzanas = %.1f\n", kiloManz, manzanas * kiloManz);
    printf("%.2f kg de uvas = %.1f\n", kiloUva, uvas * kiloUva);
    printf("%.2f kg de peras = %.1f\n\n", kiloPera, peras * kiloPera);

    subtotal = (uvas * kiloUva) + (peras * kiloPera) + (manzanas * kiloManz);
    total = (iva * subtotal) + subtotal;

    printf("Subtotal = %.2f\n", subtotal);
    printf("IVA = %.2f\n", iva * subtotal);
    printf("Total = %.2f\n", total);
    
    return 0;
}