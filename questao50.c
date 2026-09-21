/*
Autor: Pedro H. Ludwinski
Questao: 50
Descricao: Programa em C que calcula o IMC e classifica o resultado em baixo peso, peso adequado, sobrepeso ou obesidade.
Data: 11/09/2026
*/
#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    }
    else if (imc < 25) {
        printf("Peso adequado\n");
    }
    else if (imc < 30) {
        printf("Sobrepeso\n");
    }
    else {
        printf("Obesidade\n");
    }

    return 0;
}