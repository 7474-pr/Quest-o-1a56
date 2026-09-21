/*
Autor: Pedro H. Ludwinski
Questao: 32
Descricao: Programa em C que demonstra que uma funcao recebe copias dos valores quando os parametros sao passados por valor.
Data: 04/09/2026
*/
#include <stdio.h>

void trocarValores(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("\nAntes da troca:\n");
    printf("Numero 1: %d\n", numero1);
    printf("Numero 2: %d\n", numero2);

    trocarValores(numero1, numero2);

    printf("\nDepois da troca:\n");
    printf("Numero 1: %d\n", numero1);
    printf("Numero 2: %d\n", numero2);

    return 0;
}