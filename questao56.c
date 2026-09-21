/*
Autor: Pedro H. Ludwinski
Questao: 56
Descricao: Programa em C que verifica login e senha e informa se o acesso foi concedido ou negado.
Data: 01/09/2026
*/
#include <stdio.h>
#include <string.h>

int main() {
    char login[20];
    char senha[20];
   
    printf("Digite o login: ");
    scanf("%19s", login);

    printf("Digite sua senha: ");
    scanf("%19s", senha);

    if (strcmp(login, "admin") == 0 && strcmp(senha, "1234") == 0) {
        printf("Acesso concedido\n");
    }
    else {
        printf("Acesso negado\n");
    }

    return 0;
}