/*
Autor: Pedro H. Ludwinski
Questao: 15
Descricao: Programa em C que verifica se um numero inteiro informado e par ou impar.
Data: 01/09/2026
*/
#include <stdio.h>

int main() {
    int numero;
    char resto;
   
    printf("Digite um número inteiro: ");

    if (scanf("%d%c", &numero, &resto) != 2 || (resto != '\n' && resto != ' ')) {
        printf("Número inválido. Digite apenas um número inteiro.\n");
    }

    else if (numero % 2 == 0){
    printf("Número par\n");
    }
    else{
    printf("Número ímpar");
    }
    return 0;
}