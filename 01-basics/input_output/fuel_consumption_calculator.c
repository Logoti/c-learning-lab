#include <stdio.h>

int main() {
    float distancia, consumo, litros;

    printf("Digite a distancia (km) e o consumo (km/l): ");
    scanf("%f %f", &distancia, &consumo);

    litros = distancia / consumo;

    printf("Serao necessarios %.2f litros de combustivel\n", litros);

    return 0;
}