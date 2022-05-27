#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    // o boolean é tratado como binário sendo true = 1 e false = 0
    // bool a = false;
    double nota1, nota2, nota3;

    printf("Digite uma nota: ");
    scanf("%lf", &nota1);

    printf("Digite uma nota: ");
    scanf("%lf", &nota2);

    printf("Digite uma nota: ");
    scanf("%lf", &nota3);

    const double result = (nota1 + nota2 + nota3) / 3.0;

    printf("A média é: %.2lf \n", result);

    if (result >= 1 && result < 4)
    {
        printf("você está reprovado\n");
    }
    else if (result >= 4 && result <= 6)
    {
        printf("você está de recuperação\n");
    }
    else if (result > 6 && result <= 10)
    {
        printf("VOcê está aprovado\n");
    }
    else
    {
        printf("Nota inválida\n");
    }
}