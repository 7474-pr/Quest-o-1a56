/*
Autor: Pedro H. Ludwinski
Questao: 1
Descricao: Programa em C que simula uma rotina de lavagem de carro, executando as etapas de limpeza externa e interna em sequencia.
Data: 10/09/2026
*/
#include <stdio.h>
void colocarAgua() {

    printf("Colocar agua na chaleira\n");
    printf("Colocar agua no fogo\n");

}
void passarCafe() {

    printf("Colocar cafe no coador\n");
    printf("Colocar agua no coador\n");

}
void passarSugar() {

    printf("Colocar cafe na xicara\n");
    printf("Colocar leite no cafe\n");
    printf("Colocar acucar no cafe\n");
    printf("Mexer o cafe\n");

}
int main() {

    colocarAgua();

    passarCafe();

    passarSugar();

    printf("Cafe pronto para beber\n");

    return 0;
}