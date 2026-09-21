/*
Autor: Pedro H. Ludwinski
Questao: 8
Descricao: Programa em C que gera um numero secreto e permite que o usuario tente adivinhar com dicas de maior ou menor.
Data: 01/09/2026
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int secreto;
    int palpite;
    int tentativas = 0;
    srand((unsigned int)time(NULL));
    secreto = (rand() % 100) + 1; /* 1 a 100 */
    printf("Pensei em um numero de 1 a 100.\n");
    printf("Tente adivinhar!\n\n");
    do {
        printf("Seu palpite: ");
        if (scanf("%d", &palpite) != 1) {
            printf("Digite um numero inteiro.\n");
            return 1;
        }
        tentativas = tentativas + 1;
       
        if (palpite < secreto) {
            printf("Maior! O numero e maior que %d.\n\n", palpite);
        } else if (palpite > secreto) {
            printf("Menor! O numero e menor que %d.\n\n", palpite);
        } else {
            printf("Acertou! O numero era %d.\n", secreto);
            printf("Voce precisou de %d tentativa(s).\n", tentativas);
        }
    } while (palpite != secreto);
    return 0;
}