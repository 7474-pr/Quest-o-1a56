/*
Autor: Pedro H. Ludwinski
Questao: 29
Descricao: Programa em C que demonstra o escopo de variaveis locais em main e em uma funcao separada.
Data: 07/09/2026
*/
#include <stdio.h>
void mostraX(void) {
    int x = 10; 
    printf("x da funcao: %d\n", x);
}
int main(void) {
    int x = 5; 
    printf("x do main: %d\n", x);
    mostraX();
    printf("x do main de novo: %d\n", x);
    return 0;
    // Uma variável local só existe dentro das chaves { } onde foi declarada.
}