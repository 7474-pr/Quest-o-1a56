/*
Autor: Pedro H. Ludwinski
Questao: 6
Descricao: Programa em C que calcula a soma dos numeros de 1 ate N com while e compara o resultado com a formula matematica.
Data: 03/09/2026
*/
#include <stdio.h>

int main() {
    int N = 10;
    int somaWhile = 0;
    int i = 1;

    while (i <= N) {
        somaWhile += i;
        i++;
    }

    int somaFormula = N * (N + 1) / 2;

    printf("Soma com while: %d\n", somaWhile);
    printf("Soma com formula: %d\n", somaFormula);

    return 0;
}