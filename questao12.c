/*
Autor: Pedro H. Ludwinski
Questao: 12
Descricao: Programa em C que le peso e altura, calcula o IMC e classifica a situacao em baixo peso, peso adequado ou acima do peso.
Data: 04/09/2026
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
        printf("Abaixo do peso.");
    }
    else if (imc >= 18.5 && imc < 25) {
        printf("Peso adequado.");
    }
    else  {
        printf("Acima do peso.");
    }
    

    return 0;
}