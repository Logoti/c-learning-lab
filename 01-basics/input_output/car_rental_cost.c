#include <stdio.h>

int main() {
    int dias;
    float km, total;

    printf("Digite os dias de uso e a quilometragem: ");
    scanf("%d %f", &dias, &km);

    total = (60.0 * dias) + (0.15 * km);

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}