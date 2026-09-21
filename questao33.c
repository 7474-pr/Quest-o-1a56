/*
Autor: Pedro H. Ludwinski
Questao: 33
Descricao: Programa em C que le quatro notas, calcula a media aritmetica e exibe o resultado.
Data: 01/09/2026
*/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float media;
    float resultado;
    
    printf("Digite o valor da nota1: ");
    scanf("%f", &nota1);
        
    printf("Digite o valor da nota2: ");
    scanf("%f", &nota2);
            
    printf("Digite o valor da nota3: ");
    scanf("%f", &nota3);
                
    printf("Digite o valor da nota4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("O resultado da media e: %.2f\n", media);
    
  return 0;
}