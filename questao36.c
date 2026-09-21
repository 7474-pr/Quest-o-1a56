/*
Autor: Pedro H. Ludwinski
Questao: 36
Descricao: Programa em C que le nome, matricula e tres notas, calcula a media e exibe os dados do aluno.
Data: 02/09/2026
*/
#include <stdio.h>

int main() {

    char nome[100];
    int matricula;
    float nota1, nota2, nota3, media;

    printf("Digite o nome do aluno: ");
    fgets(nome, 100, stdin);

    printf("Digite a matricula: ");
    scanf("%d", &matricula);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\n--- Dados do aluno ---\n");
    printf("Nome: %s", nome);
    printf("Matricula: %d\n", matricula);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("Media: %.2f\n", media);

    return 0;
}