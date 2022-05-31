#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int a = 0;

    // ele executa o bloco do pelo menos uma vez antes da verificação
    do{

        printf("%d\n", a);
        a++;

    }while(a <= 10);

}