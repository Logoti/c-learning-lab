/**
 * Aluno: Artur Cardoso Morais
 * Materia: Algoritmos e Estrutura de Dados
 * Descricao: Determina o maior entre dois números inteiros
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, maior;

    printf("Digite dois números inteiros: ");

    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Erro: entrada inválida. Informe dois números inteiros.\n");
        return 1;
    }

    maior = (num1 > num2) ? num1 : num2;

    printf("Maior número: %d\n", maior);

    return 0;
}