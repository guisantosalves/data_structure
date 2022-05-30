#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    char sexo;

    printf("Digite F para feminino ou M para masculino: ");
    scanf("%c",&sexo);

    if(sexo == 'F' || sexo == 'f'){
        printf("Seu sexo é: feminino\n");
    }else if(sexo == 'M' || sexo == 'm'){
        printf("Seu sexo é: Masculino\n");
    }else{
        printf("Digite valores válidos\n");
    }
}