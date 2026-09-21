/*
Autor: Pedro H. Ludwinski
Questao: 41
Descricao: Programa em C que verifica se o caractere informado e uma letra minuscula.
Data: 04/09/2026
*/
#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("E uma letra minuscula.\n");
    } else {
        printf("Nao e uma letra minuscula.\n");
    }

    return 0;
}