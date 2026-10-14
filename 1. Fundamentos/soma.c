/*---------------------------------------------------------------
 * SENAI - Técnico em Desenvolvimento de Sistemas
 * UC: Internet das Coisas - 2º Módulo
 * Cidade: Cascavel - PR
 * Aluno: Gabriel Pereira Nunes do Amaral
 * Professora: Ana
 *
 * Descrição: Soma de dois valores inteiros.
 ------------------------------------------------------------------*/
#include <stdio.h> // Biblioteca 

int main() {
    // Declaração das variáveis inteiras
    int A, B, SOMA;

    // Lê os dois valores inteiros informados na entrada
    scanf("%d %d", &A, &B);

    // Calcula a soma dos valores A e B
    SOMA = A + B;

    printf("SOMA = %d\n", SOMA);

    // Finaliza o programa
    return 0;
}
