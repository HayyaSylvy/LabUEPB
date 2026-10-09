#include <stdio.h>

int main(void) {
    int a, b, menor, maior, i;
    long long soma = 0;
    printf("Digite o primeiro numero inteiro: ");
    if (scanf("%d", &a) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    printf("Digite o segundo numero inteiro: ");
    if (scanf("%d", &b) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    if (a <= b) {
        menor = a;
        maior = b;
    } else {
        menor = b;
        maior = a;
    }
    for (i = menor; i <= maior; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    printf("Soma dos impares entre %d e %d: %lld\n", menor, maior, soma);
    return 0;
}