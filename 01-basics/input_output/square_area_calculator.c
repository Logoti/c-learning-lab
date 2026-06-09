#include <stdio.h>

int main() {
    int lado, area;

    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);

    area = lado * lado;

    printf("Area do quadrado: %d\n", area);

    return 0;
}