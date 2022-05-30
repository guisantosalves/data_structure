#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    double num1, num2;
    int option;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("Escolha a operação\n1-> soma\n2-> subtração\n3-> divisão\n4-> multiplicação: ");
    scanf("%d", &option);

    switch(option){
        case 1:
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, (num1 + num2));
        break;
        case 2:
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, (num1 - num2));
        break;
        case 3:
            printf("%.2lf x %.2lf = %.2lf\n", num1, num2, (num1 * num2));
        break;
        case 4:
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, (num1 / num2));
        break;
        default: 
            printf("Digite valores válidos");
    }
}