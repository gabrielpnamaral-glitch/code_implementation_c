/*
 * SENAI - Técnico em Desenvolvimento de Sistemas
 * UC: Internet das Coisas - 2º Módulo
 * Cidade: Cascavel - PR
 * Aluno: Gabriel Pereira Nunes do Amaral
 * Professora: Ana
 *
 * Descrição: Cálculo da área de um círculo
 * utilizando PI = 3.14159.
 * Data: 09/10/2026
 */

#include <stdio.h> // Biblioteca para entrada e saída de dados

int main() {
    // Declaração das variáveis de dupla precisão
    double raio;
    double area;
    double pi = 3.14159;

    // Lê o valor do raio digitado pelo usuário
    scanf("%lf", &raio);

    // Calcula a área do círculo: PI vezes raio ao quadrado
    area = pi * raio * raio;

    // Exibe a área com quatro casas decimais
    // \n adiciona uma quebra de linha ao final
    printf("A=%.4lf\n", area);

    // Encerra o programa
    return 0;
}