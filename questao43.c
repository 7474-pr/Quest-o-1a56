/*
Autor: Pedro H. Ludwinski
Questao: 43
Descricao: Programa em C que realiza operacoes basicas entre dois numeros e impede a divisao por zero.
Data: 01/09/2026
*/
#include <stdio.h>

int main() {
    float numero1, numero2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    switch (operacao) {
        case '+':
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = numero1 * numero2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Nao e possivel dividir por zero.\n");
            }
            break;

        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}