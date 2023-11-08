#include <stdio.h>
#include "../librerias/archivo.h"

int main(int argc, char const *argv[])
{

    int a, b;

    printf("Ingrese el primer digito.\n");
    scanf("%d", &a);
    printf("Ingrese el segundo digito.\n");
    scanf("%d", &b);
    printf("El resultado es: %d",  suma(a,b));
    printf("El resultado es: %d",  resta(a,b));

    return 0;
}