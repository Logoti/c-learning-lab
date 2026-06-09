#include <stdio.h>

int main() {
    int dias,quantia;

    printf("Quantos dias o eletricista trabalhou?");
    scanf("%d",&dias);

    quantia = 150 * dias;

    printf("O valor a ser recebido é %d",quantia);
    

    return 0;
}