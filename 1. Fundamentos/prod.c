/*
 * SENAI - Técnico em Desenvolvimento de Sistemas
 * UC: Internet das Coisas - 2º Módulo
 * Cidade: Cascavel - PR
 * Aluno: Gabriel Pereira Nunes do Amaral
 * Professora: Ana
 *
 * Descrição: Cálculo do produto de dois números inteiros.
 */

#include <stdio.h> // Biblioteca para entrada e saída de dados

int main() {
    // Declaração das variáveis inteiras
    int A, B, PROD;

    // Lê os dois valores inteiros
    scanf("%d %d", &A, &B);

    // Calcula o produto de A por B
    PROD = A * B;

    // Imprime PROD, com um espaço antes do sinal de igualdade
    // e uma quebra de linha ao final
    printf("PROD = %d\n", PROD);

    // Finaliza o programa
    return 0;
}
