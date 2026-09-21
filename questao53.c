/*
Autor: Pedro H. Ludwinski
Questao: 53
Descricao: Programa em C que verifica se um ano e bissexto e informa a quantidade de dias do ano.
Data: 04/09/2026
*/
#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano e bissexto.\n");
        printf("Esse ano tem 366 dias.\n");
    }
    else {
        printf("O ano nao e bissexto.\n");
        printf("Esse ano tem 365 dias.\n");
    }

    return 0;
}