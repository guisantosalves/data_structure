#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");//colocando essa linha formata pra utf8

    int a, b;

    printf("Insira um valor: ");
    scanf("%d", &a);
    printf("Insira um valor: ");
    scanf("%d", &b);
    
    printf("sua média é: %d\n", (a + b)/2);
}