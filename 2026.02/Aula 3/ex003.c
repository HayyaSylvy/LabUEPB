#include <stdio.h>

int main(void) {
    int n, i;
    long long soma = 0;

    printf("Digite um número inteiro positivo: ");
    if (scanf("%d", &n) != 1) {
        printf("Valor invalido.\n");
        return 1;
    }

    if (n <= 0) {
        printf("N precisa ser um inteiro positivo.\n");
        return 1;
    }

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    if (soma == n) {
        printf("%d é um numero perfeito.\n", n);
    } else {
        printf("%d não é um numero perfeito.\n", n);
    }

    return 0;
}