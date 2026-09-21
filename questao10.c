/*
Autor: Pedro H. Ludwinski
Questao: 10
Descricao: Programa em C que calcula a quantidade minima de moedas necessaria para devolver um troco em centavos.
Data: 15/09/2026
*/
#include <stdio.h>
void calculaTroco(int centavos) {
    int moedas25;
    int moedas10;
    int moedas5;
    int moedas1;
    int total;
    if (centavos < 0) {
        printf("O valor do troco nao pode ser negativo.\n");
        return;
    }
  
    moedas25 = centavos / 25;
    centavos = centavos % 25;
    moedas10 = centavos / 10;
    centavos = centavos % 10;
    moedas5 = centavos / 5;
    centavos = centavos % 5;
    moedas1 = centavos; 
    total = moedas25 + moedas10 + moedas5 + moedas1;
    printf("Moedas de 25: %d\n", moedas25);
    printf("Moedas de 10: %d\n", moedas10);
    printf("Moedas de  5: %d\n", moedas5);
    printf("Moedas de  1: %d\n", moedas1);
    printf("Total de moedas: %d\n", total);
}
int main(void) {
    int centavos;
    printf("Troco em centavos: ");
    if (scanf("%d", &centavos) != 1) {
        printf("Digite um numero inteiro.\n");
        return 1;
    }
    calculaTroco(centavos);
    return 0;
}