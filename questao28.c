/*
Autor: Pedro H. Ludwinski
Questao: 28
Descricao: Programa em C que calcula a area e o perimetro de um circulo a partir do raio informado.
Data: 06/09/2026
*/
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int main(void) {
    float raio;
    float area;
    float perimetro;
    printf("Raio: ");
    scanf("%f", &raio);
    area = M_PI * raio * raio;
    perimetro = 2 * M_PI * raio;
    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    return 0;
}