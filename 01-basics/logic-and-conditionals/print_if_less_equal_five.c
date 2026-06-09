#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 5) {
        printf("Valor dentro do limite: %d\n", numero);
    } else {
        printf("Valor acima do limite\n");
    }

    return 0;
}