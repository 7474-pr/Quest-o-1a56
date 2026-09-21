/*
Autor: Pedro H. Ludwinski
Questao: 27
Descricao: Programa em C que le e armazena valores de tipos inteiro, decimal, caractere e texto em variaveis distintas.
Data: 10/09/2026
*/
#include <stdio.h>

int main(void) {
    int inteiro;
    double decimal;
    char letra;
    char texto[100];

    printf("Inteiro: ");
    scanf("%d", &inteiro);

    printf("Decimal: ");
    scanf("%lf", &decimal);

    printf("Caractere: ");
    scanf(" %c", &letra); /* o espaco ignora o Enter anterior */

    printf("String: ");
    scanf("%99s", texto);

    return 0;
}
