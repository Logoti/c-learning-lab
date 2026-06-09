#include <stdio.h>

int main() {
    float salario, novosalario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    novosalario = salario * 1.25;

    printf("Novo salario: %.2f\n", novosalario);

    return 0;
}