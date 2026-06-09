#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    double salario, imposto;

    printf("Informe o salário bruto: ");

    if (scanf("%lf", &salario) != 1 || salario < 0) {
        printf("Entrada inválida.\n");
        return 1;
    }

    if (salario < 600) {
        imposto = 0;
    } 
    else if (salario < 1500) {
        imposto = salario * 0.10;
    } 
    else {
        imposto = salario * 0.15;
    }

    printf("Imposto a pagar: R$ %.2lf\n", imposto);

    return 0;
}