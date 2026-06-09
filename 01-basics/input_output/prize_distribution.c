#include <stdio.h>

int main() {
    int valorpremio;
    float ganhador;

    printf("Digite o valor total do premio: ");
    scanf("%d", &valorpremio);

    ganhador = valorpremio / 3.0;

    printf("Cada ganhador recebera: %.2f\n", ganhador);

    return 0;
}