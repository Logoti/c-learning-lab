#include <stdio.h>

int main() {
    float preco, total;
    int qtd;

    printf("Digite o preco e a quantidade do produto: ");
    scanf("%f %d", &preco, &qtd);

    total = preco * qtd;

    printf("Valor total: %.2f\n", total);

    return 0;
}