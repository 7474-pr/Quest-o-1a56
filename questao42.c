/*
Autor: Pedro H. Ludwinski
Questao: 42
Descricao: Programa em C que calcula o primeiro digito verificador de um CPF a partir dos nove primeiros digitos.
Data: 04/09/2026
*/
#include <stdio.h>

int main() {
    char cpf[10];
    int soma = 0;
    int resto;
    int digito;

    printf("Digite os 9 primeiros digitos do CPF: ");
    scanf("%9s", cpf);

    soma += (cpf[0] - '0') * 10;
    soma += (cpf[1] - '0') * 9;
    soma += (cpf[2] - '0') * 8;
    soma += (cpf[3] - '0') * 7;
    soma += (cpf[4] - '0') * 6;
    soma += (cpf[5] - '0') * 5;
    soma += (cpf[6] - '0') * 4;
    soma += (cpf[7] - '0') * 3;
    soma += (cpf[8] - '0') * 2;

    resto = soma % 11;

    if (resto == 0 || resto == 1) {
        digito = 0;
    } else {
        digito = 11 - resto;
    }

    printf("Primeiro digito verificador: %d\n", digito);

    return 0;
}