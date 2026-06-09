/**
 * Aluno: Artur Cardoso Morais
 * Materia: Algoritmos e Estrutura de Dados
 * Descricao: Verifica se um número inteiro é par ou ímpar
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1;

    printf("Digite um número inteiro: ");

    if (scanf("%d", &num1) != 1) {
        printf("Entrada inválida. Informe um número inteiro.\n");
        return 1;
    }

    if (num1 % 2 == 0) {
        printf("Resultado: PAR\n");
    } else {
        printf("Resultado: ÍMPAR\n");
    }

    return 0;
}