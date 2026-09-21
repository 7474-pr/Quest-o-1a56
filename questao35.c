/*
Autor: Pedro H. Ludwinski
Questao: 35
Descricao: Programa em C que exibe o tamanho em bytes de tipos basicos e de um ponteiro para inteiro.
Data: 03/09/2026
*/
#include <stdio.h>

int main() {

    int *ponteiro;

    printf("Tamanho de int: %zu bytes\n", sizeof(int));
    printf("Tamanho de float: %zu bytes\n", sizeof(float));
    printf("Tamanho de double: %zu bytes\n", sizeof(double));
    printf("Tamanho de char: %zu byte\n", sizeof(char));
    printf("Tamanho de ponteiro para int: %zu bytes\n", sizeof(ponteiro));

    return 0;
}