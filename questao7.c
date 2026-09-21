/*
Autor: Pedro H. Ludwinski
Questao: 7
Descricao: Programa em C que simula um semaforo em loop, alternando os estados verde, amarelo e vermelho com pausas de tempo.
Data: 06/09/2026
*/
#include <stdio.h>
#include <unistd.h>

int main() {
    while (1) {
    printf("Verde (30s)\n");
    sleep(30);

    printf("Amarelo (5s)\n");
    sleep(5);

    printf("Vermelho (25s)\n");
    sleep(25);
}

    return 0;
}