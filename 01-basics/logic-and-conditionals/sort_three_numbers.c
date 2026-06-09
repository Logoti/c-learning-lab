/**
 * Aluno: Artur Cardoso Morais
 * Materia: Algoritmos e Estrutura de Dados
 * Descricao: Imprimir três números em ordem crescente
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, temp;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num1 > num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("Ordem crescente: %d %d %d\n", num1, num2, num3);

    printf("\n");
    return 0;
}