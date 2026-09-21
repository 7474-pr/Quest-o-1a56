/*
Autor: Pedro H. Ludwinski
Questao: 49
Descricao: Programa em C que classifica uma nota de 0 a 100 usando conceitos de A a F.
Data: 05/09/2026
*/
#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota de 0 a 100: ");
    scanf("%d", &nota);

    if (nota >= 90) {
        printf("Conceito A\n");
    } else if (nota >= 80) {
        printf("Conceito B\n");
    } else if (nota >= 70) {
        printf("Conceito C\n");
    } else if (nota >= 60) {
        printf("Conceito D\n");
    } else {
        printf("Conceito F\n");
    }

    return 0;
}