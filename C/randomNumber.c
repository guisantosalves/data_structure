#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
    com o valor da função time(NULL). Este por sua vez, é calculado
    como sendo o total de segundos passados desde 1 de janeiro de 1970
    até a data atual.
    Desta forma, a cada execução o valor da "semente" será diferente.
    */
    srand((unsigned)time(NULL));
    //-> unsigned -> força ser número positivo
    
    int aleatorio = rand();

    //ls -> é um ponteiro de um inteiro
    printf("%d\n", aleatorio);

    // gerando numero aleatorio de 0 a 30
    for(int i=0; i<10; i++){
        printf("%d\n",(rand() % 30));
    }
    
    
}