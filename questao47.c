/*
Autor: Pedro H. Ludwinski
Questao: 47
Descricao: Programa em C que calcula um novo salario aplicando percentuais de aumento conforme a faixa salarial.
Data: 11/09/2026
*/
#include <stdio.h>
int main(void) {
    float salario;
    float novo;
    printf("Salario atual: ");
    scanf("%f", &salario);
    if (salario < 1000) {
        novo = salario * 1.20; /* aumento de 20% */
    } else if (salario <= 2000) {
        novo = salario * 1.10; /* aumento de 10% */
    } else {
        novo = salario * 1.05; /* aumento de 5% */
    }
    printf("Novo salario: %.2f\n", novo);
    return 0;
}