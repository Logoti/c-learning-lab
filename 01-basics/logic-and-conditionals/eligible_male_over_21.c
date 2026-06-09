#include <stdio.h>

int main() {
    char nome[50];
    char sexo;
    int idade;

    printf("Qual o nome da pessoa? ");
    scanf("%s", nome);

    printf("Digite idade e sexo (M/F): ");
    scanf("%d %c", &idade, &sexo);

    if ((sexo == 'M' || sexo == 'm') && idade > 21) {
        printf("Aprovado: %s\n", nome);
    } else {
        printf("Nao atende aos criterios\n");
    }

    return 0;
}