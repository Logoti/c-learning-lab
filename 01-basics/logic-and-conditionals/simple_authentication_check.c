#include <stdio.h>

int main() {
    int matricula_input, senha_input;

    int m1 = 987, s1 = 789;
    int m2 = 321, s2 = 123;
    int m3 = 654, s3 = 456;

    printf("Digite matricula e senha: ");
    scanf("%d %d", &matricula_input, &senha_input);

    if ((matricula_input == m1 && senha_input == s1) ||
        (matricula_input == m2 && senha_input == s2) ||
        (matricula_input == m3 && senha_input == s3)) {

        printf("Acesso liberado\n");

    } else {
        printf("Acesso negado\n");
    }

    return 0;
}