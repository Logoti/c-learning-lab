#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num[3];
    int menor;

    printf("Digite 3 números inteiros: ");

    if (scanf("%d %d %d", &num[0], &num[1], &num[2]) != 3) {
        printf("Entrada inválida.\n");
        return 1;
    }

    menor = num[0];

    for (int i = 1; i < 3; i++) {
        if (num[i] < menor) {
            menor = num[i];
        }
    }

    printf("Menor número: %d\n", menor);

    return 0;
}