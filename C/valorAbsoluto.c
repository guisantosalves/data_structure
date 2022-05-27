#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //%f -> floar
    //%d -> int
    //lf -> double
    //%i -> bolean

    setlocale(LC_ALL, "");

    float nota, nota1;

    printf("insira sua primeira nota: ");
    scanf("%f", &nota);

    printf("insira sua segunda nota: ");
    scanf("%f", &nota1);

    float result = nota - nota1;
    printf("Sua diferença absoluta é: %d\n", abs(result));
}