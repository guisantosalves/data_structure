#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a, b, c;
    
    printf("Digite três números: \n");
    scanf("%d %d %d", &a, &b, &c);

    int result = a * b * c;
    
    printf("A multiplicação dos três números é: %d\n", result);
    
}