/*----------------------------------------------------------]

 * SENAI - Técnico em Desenvolvimento de Sistemas
 * UC: Internet das Coisas - 2º Módulo
 * Cidade: Cascavel - PR
 * Aluno: Gabriel Pereira Nunes do Amaral
 * Professora: Ana
 *
 * Descrição: Cálculo da área de um círculo
 * utilizando PI = 3.14159.
 * Data: 09/10/2026
------------------------------------------------------------*/

#include <stdio.h> // Biblioteca 
int main() {
    // Declaração das variáveis
    double raio;
    double area;
    double pi = 3.14159;

    // Lê o valor do raio digitado pelo usuário
    scanf("%lf", &raio);

    // Calcula a área do círculo
    area = pi * raio * raio;

    printf("A=%.4lf\n", area);

    // Encerra o programa
    return 0;
}