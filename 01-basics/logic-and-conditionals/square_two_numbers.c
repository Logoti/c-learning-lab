/**
 * Aluno: Artur Cardoso Morais
 * Materia: Algoritmos e Estrutura de Dados
 * Descricao: Calcula o quadrado de dois números positivos
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    printf("Digite o primeiro número positivo: ");
    if (scanf("%d", &num1) != 1 || num1 < 0) {
        printf("Valor inválido!\n");
        return 1;
    }

    printf("Digite o segundo número positivo: ");
    if (scanf("%d", &num2) != 1 || num2 < 0) {
        printf("Valor inválido!\n");
        return 1;
    }

    printf("Quadrado de %d = %d\n", num1, num1 * num1);
    printf("Quadrado de %d = %d\n", num2, num2 * num2);

    return 0;
}