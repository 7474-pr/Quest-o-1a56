/*
Autor: Pedro H. Ludwinski
Questao: 13
Descricao: Programa em C que verifica se tres numeros estao em ordem crescente, decrescente ou fora dessa ordem.
Data: 03/09/2026
*/
#include <stdio.h>
int main(void) {
    int a, b, c;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && b < c) {
        printf("Ordem crescente.\n");
    } else if (a > b && b > c) {
        printf("Ordem decrescente.\n");
    } else {
        printf("Nao estao em ordem crescente nem decrescente.\n");
    }
    return 0;
}