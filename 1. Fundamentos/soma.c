/*---------------------------------------------------------------
 * SENAI - Técnico em Desenvolvimento de Sistemas
 * UC: Internet das Coisas - 2º Módulo
 * Cidade: Cascavel - PR
 * Aluno: Gabriel Pereira Nunes do Amaral
 * Professora: Ana
 *
 * Descrição: Soma de dois valores inteiros.
 */--------------------------------------------------------------- 

#include <stdio.h> // Biblioteca para entrada e saída de dados

int main() {
    // Declaração das variáveis inteiras
    int A, B, SOMA;

    // Lê os dois valores inteiros informados na entrada
    scanf("%d %d", &A, &B);

    // Calcula a soma dos valores A e B
    SOMA = A + B;

    // Exibe a palavra SOMA em maiúsculas,
    // com espaços antes e depois do sinal de igualdade
    // e quebra de linha no final
    printf("SOMA = %d\n", SOMA);

    // Finaliza o programa
    return 0;
}
