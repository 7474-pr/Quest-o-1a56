/*
Autor: Pedro H. Ludwinski
Questao: 38
Descricao: Programa em C que le a idade de uma pessoa e informa se ela e maior ou menor de idade.
Data: 10/09/2026
*/
#include <stdio.h>

int main() {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    idade >= 18 ? printf("Maior de idade") : printf("Menor de idade");

    return 0;
}