/*
Autor: Pedro H. Ludwinski
Questao: 51
Descricao: Programa em C que converte um numero de 1 a 7 no nome correspondente ao dia da semana.
Data: 02/09/2026
*/
#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    if (dia < 1 || dia > 7) {
        printf("Numero invalido!\n");
    }
    else {
        switch (dia) {

            case 1:
                printf("Domingo\n");
                break;

            case 2:
                printf("Segunda-feira\n");
                break;

            case 3:
                printf("Terca-feira\n");
                break;

            case 4:
                printf("Quarta-feira\n");
                break;

            case 5:
                printf("Quinta-feira\n");
                break;

            case 6:
                printf("Sexta-feira\n");
                break;

            case 7:
                printf("Sabado\n");
                break;

            default:
                printf("Dia invalido\n");
        }
    }

    return 0;
}