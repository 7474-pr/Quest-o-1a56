/*
Autor: Pedro H. Ludwinski
Questao: 52
Descricao: Programa em C que ordena tres numeros inteiros em ordem crescente usando trocas entre variaveis.
Data: 02/09/2026
*/
#include <stdio.h>

int main() {
    int a, b, c;
    int temp;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("Numeros em ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}