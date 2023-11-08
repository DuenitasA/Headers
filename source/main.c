#include <stdio.h>
#include "../librerias/archivo.h"
#include "../librerias/archivoR.h"
#include "../librerias/archivoM.h"
#include "../librerias/archivoD.h"
int main(int argc, char const *argv[])
{

    int a, b;

    printf("Ingrese el primer digito.\n");
    scanf("%d", &a);
    printf("Ingrese el segundo digito.\n");
    scanf("%d", &b);
    printf("El resultado es: %d \n", suma(a, b));
    printf("El resultado es: %d \n", resta(a, b));
    printf("El resultado es: %d \n", mult(a, b));
    printf("El resultado es: %d \n", div(a, b));
    return 0;
}