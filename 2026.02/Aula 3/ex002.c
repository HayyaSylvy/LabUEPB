#include <stdio.h>

int main(void) {
    double altura, soma = 0.0;
    int quantidade = 0;

    printf("Levantamento de estatura IBGE em Patos\n");
    printf("Informe as alturas em metros. Digite 0 para encerrar o programa.\n");

    while (1) {
        printf("Altura: ");
        if (scanf("%lf", &altura) != 1) {
            printf("Valor invalida.\n");
            return 1;
        }

        if (altura == 0) {
            break;
        }

        if (altura < 0) {
            printf("Altura invalida. Informe um valor positivo.\n");
            continue;
        }

        soma += altura;
        quantidade++;
    }

    if (quantidade == 0) {
        printf("Nenhuma altura foi informada.\n");
    } else {
        printf("Pessoas registradas: %d\n", quantidade);
        printf("Media das alturas: %.2f m\n", soma / quantidade);
    }

    return 0;
}