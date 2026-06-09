#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0 || num % 3 == 0) {
        printf("O numero %d e divisivel por 2 ou 3\n", num);
    } else {
        printf("O numero %d nao e divisivel por 2 nem por 3\n", num);
    }

    return 0;
}