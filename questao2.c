/*
Autor: Pedro H. Ludwinski
Questao: 2
Descricao: Programa em C que exibe os primeiros valores de uma sequencia numerica inspirada na serie de Fibonacci.
Data: 05/09/2026
*/
#include <stdio.h>

int main() {

    int a = 1;
    int b = 1;
    int c;

    printf("%d ", a);
    printf("%d ", b);

    c = a + b;
    printf("%d ", c);

    a = b;
    b = c;

    c = a + b;
    printf("%d ", c);

    return 0;
}