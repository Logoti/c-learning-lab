#include <stdio.h>

int main() {
    int id;

    printf("Digite um ID: ");
    scanf("%d", &id);

    switch (id) {
        case 1: printf("Ana\n"); break;
        case 2: printf("Alex\n"); break;
        case 3: printf("Bruna\n"); break;
        case 4: printf("Jose\n"); break;
        case 5: printf("Amanda\n"); break;
        case 6: printf("Joao\n"); break;
        default: printf("ID invalido\n");
    }

    return 0;
}