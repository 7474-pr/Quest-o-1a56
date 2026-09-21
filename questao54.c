/*
Autor: Pedro H. Ludwinski
Questao: 54
Descricao: Programa em C que compara duas palavras e informa se as strings sao iguais ou diferentes.
Data: 04/09/2026
*/
#include <stdio.h>
#include <string.h>

int main() {
    char texto1[100];
    char texto2[100];

    printf("Digite a primeira palavra: ");
    scanf("%99s", texto1);

    printf("Digite a segunda palavra: ");
    scanf("%99s", texto2);

    if (strcmp(texto1, texto2) == 0) {
        printf("As strings sao iguais.\n");
    }
    else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}