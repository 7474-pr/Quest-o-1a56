/*
Autor: Pedro H. Ludwinski
Questao: 40
Descricao: Programa em C que usa deslocamento de bits para calcular o dobro e a metade inteira de um numero.
Data: 03/09/2026
*/
#include <stdio.h>

int main() {
    int numero;
    int dobro, metade;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    dobro = numero << 1;
    metade = numero >> 1;

    printf("Dobro: %d\n", dobro);
    printf("Divisao por 2: %d\n", metade);

    return 0;
}