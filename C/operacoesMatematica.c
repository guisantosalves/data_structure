#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 5, b = 3;

    printf("A soma de %d e %d = %d\n", a, b, a + b);//soma

    printf("A subtração de %d e %d = %d\n", a, b, a - b);//subtração
    
    printf("A divisao de %d e %d = %d\n", a, b, a / b);//divisao
    
    printf("A mult de %d e %d = %d\n", a, b, a * b);//mult

    printf("O mod de %d e %d = %d\n", a, b, a % b);//resto da divisao

    printf("O valor absoluto de -3 = %d\n", abs(-3));//absoluto
}