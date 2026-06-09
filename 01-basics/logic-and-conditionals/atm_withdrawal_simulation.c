#include <stdio.h>

int main() {
    int contaCadastrada = 999;
    int senhaCadastrada = 456;
    float saldoAtual = 100.00;

    int contaInput, senhaInput;
    float saqueSolicitado;

    printf("Digite conta, senha e valor do saque: ");
    scanf("%d %d %f", &contaInput, &senhaInput, &saqueSolicitado);

    if (contaInput == contaCadastrada && senhaInput == senhaCadastrada) {

        if (saqueSolicitado > 0 && saqueSolicitado <= saldoAtual) {
            saldoAtual -= saqueSolicitado;
            printf("Saque realizado. Saldo: R$ %.2f\n", saldoAtual);
        } else {
            printf("Erro: valor invalido ou saldo insuficiente.\n");
        }

    } else {
        printf("Erro: credenciais invalidas.\n");
    }

    return 0;
}