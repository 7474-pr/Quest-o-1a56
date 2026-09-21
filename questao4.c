/*
Autor: Pedro H. Ludwinski
Questao: 4
Descricao: Programa em C que gera senhas numeradas em ordem para representar uma fila de pessoas.
Data: 03/09/2026
*/
#include <stdio.h>

int main() {
     int quantidadePessoas;
    
    printf("Quantas pessoas estão na fila? ");
    scanf("%d", &quantidadePessoas);

    for (int i = 1; i <= quantidadePessoas; i++){
        printf("Senha %d\n", i);
    }
    return 0;
}