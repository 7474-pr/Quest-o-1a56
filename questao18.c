/*
Autor: Pedro H. Ludwinski
Questao: 18
Descricao: Programa em C que avalia a aprovacao de um aluno com base em nota e frequencia usando a regra de AND.
Data: 03/09/2026
*/
#include <stdio.h>
int main(void) {
    float nota;
    float frequencia;
    printf("Nota: ");
    scanf("%f", &nota);
    printf("Frequencia (%%): ");
    scanf("%f", &frequencia);
    /* Aprovado so se as DUAS condicoes forem verdadeiras (E logico) */
    if (nota >= 7 && frequencia >= 75) {
        printf("Aprovado.\n");
    } else {
        printf("Reprovado.\n");
    }
    return 0;
}