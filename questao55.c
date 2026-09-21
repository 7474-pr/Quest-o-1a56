/*
Autor: Pedro H. Ludwinski
Questao: 55
Descricao: Programa em C que oferece um menu de operacoes matematicas para dois numeros.
Data: 03/09/2026
*/
#include <stdio.h>

int main() {
    int opcao;
    float numero1, numero2, resultado;

    printf("===== MENU =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    switch (opcao) {

        case 1:
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            resultado = numero1 * numero2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 4:
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            }
            else {
                printf("Nao e possivel dividir por zero.\n");
            }
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}