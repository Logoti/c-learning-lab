#include <stdio.h>

int main() {
    int num1, num2, oper;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    if (num2 != 0) {
        oper = num1 % num2;
        printf("O modulo de %d por %d é %d\n", num1, num2, oper);
    } else {
        printf("Erro: divisor nao pode ser zero\n");
    }

    return 0;
}