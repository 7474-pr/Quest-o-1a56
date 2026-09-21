/*
Autor: Pedro H. Ludwinski
Questao: 11
Descricao: Programa em C que converte um valor em reais para dolares usando a taxa de cambio informada pelo usuario.
Data: 06/09/2026
*/
#include <stdio.h>
int main(void) {
    float reais;
    float taxa;
    float dolares;
    printf("Valor em reais: ");
    scanf("%f", &reais);
    printf("Taxa de cambio (1 dolar em reais): ");
    scanf("%f", &taxa);
    dolares = reais / taxa;
    printf("Valor em dolares: %.2f\n", dolares);
    return 0;
}