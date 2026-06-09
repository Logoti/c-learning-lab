#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    int d1, m1, a1, d2, m2, a2;
    int anoAtual = 2026;

    printf("Nome pessoa 1: ");
    scanf("%s", nome1);
    printf("Data nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &d1, &m1, &a1);

    printf("Nome pessoa 2: ");
    scanf("%s", nome2);
    printf("Data nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    printf("\n%s: %d anos\n", nome1, anoAtual - a1);
    printf("%s: %d anos\n", nome2, anoAtual - a2);

    if (a1 < a2 ||
        (a1 == a2 && m1 < m2) ||
        (a1 == a2 && m1 == m2 && d1 < d2)) {
        printf("Mais novo: %s\n", nome1);
    } else if (a2 < a1 ||
        (a1 == a2 && m2 < m1) ||
        (a1 == a2 && m1 == m2 && d2 < d1)) {
        printf("Mais novo: %s\n", nome2);
    } else {
        printf("Mesma idade\n");
    }

    return 0;
}