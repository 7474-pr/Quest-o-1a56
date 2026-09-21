/*
Autor: Pedro H. Ludwinski
Questao: 30
Descricao: Programa em C que divide dois numeros e mostra o resultado em ponto flutuante com duas casas decimais.
Data: 08/09/2026
*/
#include <stdio.h>

int main() {
    int numero1, numero2;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    resultado = (float) numero1 / numero2;

    printf("Resultado da divisao: %.2f\n", resultado);

    return 0;
}