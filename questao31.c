/*
Autor: Pedro H. Ludwinski
Questao: 31
Descricao: Programa em C que le o nome completo do usuario e imprime uma saudacao com o valor informado.
Data: 02/09/2026
*/
#include <stdio.h>

int main() {
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);

    printf("Ola, %sObrigada por escolher nossa empresa!", nome);

    return 0;
}