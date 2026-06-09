/**
 * Aluno: Artur Cardoso Morais
 * Materia: Algoritmos e Estrutura de Dados
 * Descricao: Calcula o peso ideal baseado em sexo e altura
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    float peso, altura;

    printf("Digite a altura do indivíduo (em metros): ");
    if (scanf("%f", &altura) != 1 || altura <= 0) {
        printf("Altura inválida!\n");
        return 1;
    }

    printf("Digite o sexo do indivíduo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso = (72.7 * altura) - 58;
        printf("Peso ideal: %.2f kg\n", peso);
    } 
    else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2f kg\n", peso);
    } 
    else {
        printf("Sexo inválido!\n");
        return 1;
    }

    return 0;
}