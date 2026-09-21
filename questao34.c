/*
Autor: Pedro H. Ludwinski
Questao: 34
Descricao: Programa em C que calcula a area de um circulo a partir do raio informado pelo usuario.
Data: 01/09/2026
*/
#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A area do circulo e: %.2f\n", area);

    return 0;
}