/**
 * Aluno: Artur Cardoso Morais
 * Materia: Algoritmos e Estrutura de Dados
 * Descricao: Calcula o valor total da compra de maçãs com preço por quantidade
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int macas;
    double valor;

    printf("Digite o número de maçãs compradas: ");

    if (scanf("%d", &macas) != 1 || macas <= 0) {
        printf("Entrada inválida. Informe um número inteiro positivo.\n");
        return 1;
    }

    if (macas < 12) {
        valor = macas * 0.30;
    } else {
        valor = macas * 0.25;
    }

    printf("Valor total da compra: R$ %.2f\n", valor);

    return 0;
}