/*
Autor: Pedro H. Ludwinski
Questao: 14
Descricao: Programa em C que demonstra os operadores logicos AND, OR, NOT e XOR com valores informados pelo usuario.
Data: 08/09/2026
*/
#include <stdio.h>
int main(void) {
    int A, B;
    printf("Digite A (0 ou 1): ");
    scanf("%d", &A);
    printf("Digite B (0 ou 1): ");
    scanf("%d", &B);
    printf("A && B = %d\n", A && B);
    printf("A || B = %d\n", A || B);
    printf("!A     = %d\n", !A);
    printf("A ^ B  = %d\n", A ^ B);
    return 0;
}