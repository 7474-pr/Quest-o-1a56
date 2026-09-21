/*
Autor: Pedro H. Ludwinski
Questao: 23
Descricao: Programa em C que mostra como a sintaxe correta e a semantica do codigo influenciam a execucao de uma divisao simples.
Data: 02/09/2026
*/
#include <stdio.h>

int main(void) {
    /* Sintaxe: faltava o ; no final do printf.
       Semantica: nao se divide por zero. */
    printf("O resultado e %d\n", 10 / 2);
    return 0;
}
