/*
Autor: Pedro H. Ludwinski
Questao: 48
Descricao: Programa em C que calcula as raizes reais de uma equacao do segundo grau usando o discriminante.
Data: 01/09/2026
*/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta;
    float x1, x2;

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
    } 
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Existe uma raiz: %.2f\n", x1);
    } 
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("X1: %.2f\n", x1);
        printf("X2: %.2f\n", x2);
    }

    return 0;
}