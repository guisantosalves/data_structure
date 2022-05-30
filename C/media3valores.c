#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    double nota, nota1, nota2;
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota1);

    printf("Digite a terceira nota: ");
    scanf("%lf", &nota2);

    double result = (nota + nota1 + nota2) / 3;

    if(result >= 7){
        printf("aluno aprovado\n");
    }else if(result < 7 && result >= 0){
        printf("aluno reprovado\n");
    }else{
        printf("Digite valores válidos\n");
    }
}