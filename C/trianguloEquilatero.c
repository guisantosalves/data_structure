#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int lado1, lado2, lado3;

    printf("Informe o valor do primeiro lado: ");
    scanf("%d", &lado1);

    printf("Informe o valor do segundo lado: ");
    scanf("%d", &lado2);

    printf("Informe o valor do terceiro lado: ");
    scanf("%d", &lado3);

    if(lado1 == lado2 && lado1 == lado3){
        printf("esse é um triânfulo equilátero\n");
    }else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf("esse é um triânfulo isoscele\n");
    }else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
        printf("esse é um triângulo escaleno\n");
    }
}