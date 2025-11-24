#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int  a,b,c,d,e;
    float R1,R2,R3,R4,R5;
    a=80;
    b=90;
    c=100;
    d=70;
    e=60;
    R1=a*b+c-d/e;
    R2=(a*b)+c-(d/e);
    R3=pow (a,2)-2;
    R4=a/pow(b,c)/d;//error
    R5=a/pow(b,(c/d));//revisar


    printf(" a=%i b=%i c=%i d=%i e=%i \n", a,b,c,d,e);
    printf(" 'a*b+c-d/e' R1 = %f \n", R1);
    printf(" '(a*b)+c-(d/e)' R2 = %f \n", R2);
    printf(" 'pow (a,2)-2' R2 = %f \n", R3);
    printf(" 'a/pow(b,c)/d' R2 = %f \n", R4);
    printf(" 'a/pow((b,c)/d)' R2 = %f \n", R5);

    return 0;
}
