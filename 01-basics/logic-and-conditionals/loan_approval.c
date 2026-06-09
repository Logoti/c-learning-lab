#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float valor_emprestimo, salario, valor_parcela;
    int n_parcela;

    printf("Valor do empréstimo: ");
    if (scanf("%f", &valor_emprestimo) != 1 || valor_emprestimo <= 0) {
        printf("Empréstimo inválido.\n");
        return 1;
    }

    printf("Número de parcelas: ");
    if (scanf("%d", &n_parcela) != 1 || n_parcela <= 0) {
        printf("Número de parcelas inválido.\n");
        return 1;
    }

    printf("Salário: ");
    if (scanf("%f", &salario) != 1 || salario <= 0) {
        printf("Salário inválido.\n");
        return 1;
    }

    valor_parcela = valor_emprestimo / n_parcela;

    printf("Parcela mensal: R$ %.2f\n", valor_parcela);

    if (valor_parcela <= 0.30 * salario) {
        printf("Status: APROVADO\n");
    } else {
        printf("Status: NEGADO\n");
    }

    return 0;
}