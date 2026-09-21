/*
Autor: Pedro H. Ludwinski
Questao: 37
Descricao: Programa em C que calcula as raizes reais de uma equacao do segundo grau usando a formula de Bhaskara.
Data: 04/09/2026
*/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("O valor de a deve ser diferente de zero.\n");
        return 1;
    }

    delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
        return 0;
    }

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("X1: %.2f\n", x1);
    printf("X2: %.2f\n", x2);

    return 0;
}