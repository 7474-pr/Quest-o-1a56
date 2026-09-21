/*
Autor: Pedro H. Ludwinski
Questao: 1
Descricao: Programa em C que simula as etapas de lavagem de um carro, mostrando a sequencia de limpeza das rodas, do interior e da aplicacao de cera.
Data: 07/09/2026
*/
# include <stdio.h>

//
//criar rotinas para um lavar um carro
//3 subrotinas(funcoes)
//passar agua com sabao
//passar agua limpa
//lavar as rodas com sabao 
//passar agua nas rodas
//passar pano dentro do carro 
//passar apirador limpeza interna 
//passar sera 
// Função para lavar as rodas
void lavarRodas() {

    printf("Lavar as rodas com sabao\n");
    printf("Passar agua nas rodas\n");
}

// Função para limpar o interior
void limparInterior() {

    printf("Passar pano dentro do carro\n");
    printf("Passar aspirador\n");
}

// Função para passar cera
void passarCera() {

    printf("Passar cera no carro\n");
}


int main() {

    printf("Passar agua com sabao\n");
    printf("Passar agua limpa\n");

    // Chama a funcao lavarRodas
    lavarRodas();

    // Chama a funcao limparInterior
    limparInterior();

    // Chama a funcao passarCera
    passarCera();

    printf("Carro lavado com sucesso!\n");

    return 0;
}