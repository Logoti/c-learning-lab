#include <stdio.h>

int main() {
    double num[4], soma;

    printf("Digite 4 numeros em sequencia: ");
    scanf("%lf %lf %lf %lf", &num[0], &num[1], &num[2], &num[3]);

    soma = (num[0] * num[0]) + (num[1] * num[1]) + (num[2] * num[2]) + (num[3] * num[3]);

    printf("A soma total e %.2lf\n", soma);

    return 0;
}