/*
Autor: Pedro H. Ludwinski
Questao: 3
Descricao: Programa em C que coleta dados de livros e salva as informacoes em um arquivo CSV chamado biblioteca.csv.
Data: 06/09/2026
*/
#include <stdio.h>

struct Livro {
    char titulo[100];
    char autor[100];
    char isbn[20];
};

int main() {
    FILE *arquivo;
    struct Livro livro;
    int continuar = 1;

    arquivo = fopen("biblioteca.csv", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("--- Sistema de Catalogacao ---\n");

    while (continuar == 1) {
        printf("\nDigite o Titulo: ");
        scanf(" %99[^\n]", livro.titulo);

        printf("Digite o Autor: ");
        scanf(" %99[^\n]", livro.autor);

        printf("Digite o ISBN: ");
        scanf(" %19s", livro.isbn);

        fprintf(arquivo, "%s;%s;%s\n", livro.titulo, livro.autor, livro.isbn);

        printf("\nDeseja adicionar outro? (1 para Sim, 0 para Nao): ");
        scanf(" %d", &continuar);
    }

    fclose(arquivo);
    printf("Dados salvos com sucesso em biblioteca.csv!\n");

    return 0;
}
