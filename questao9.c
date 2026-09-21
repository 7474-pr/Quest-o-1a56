/*
Autor: Pedro H. Ludwinski
Questao: 9
Descricao: Programa em C que desenha um quadrado preenchido por asteriscos usando o tamanho informado pelo usuario.
Data: 06/09/2026
*/
#include <stdio.h>
void desenhaQuadrado(int lado) {
    int linha;
    int coluna;
    if (lado <= 0) {
        printf("O lado precisa ser maior que 0.\n");
        return;
    }
    for (linha = 0; linha < lado; linha++) {
        for (coluna = 0; coluna < lado; coluna++) {
            printf("* ");
        }
        printf("\n");
    }
}
int main(void) {
    int lado;
    printf("Digite o lado do quadrado: ");
    if (scanf("%d", &lado) != 1) {
        printf("Digite um numero inteiro.\n");
        return 1;
    }
    desenhaQuadrado(lado);
    return 0;
}