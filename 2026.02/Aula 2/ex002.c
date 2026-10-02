# include <stdio.h>
int main() {
    int etat;
    int valo;
    int valoipva;

    printf("Digite o valor do seu veículo: ");
    scanf("%d", &valo);
    printf("Digite o número do seu estado.");
    printf("\n1 para Paraná, 2 para Rio Grande do Sul e 3 para Santa Catarina: ");
    scanf("%d", &etat);
    if (etat == 1) {
        valoipva = valo * 0.035;
        printf("O valor a ser pago será %d\n",valoipva);
    }
    if (etat == 2) {
        valoipva = valo * 0.03;
        printf("O valor a ser pago %d\n",valoipva);
    }
    if (etat == 3) {
        valoipva = valo * 0.02;
        printf("O valor a ser pago %d\n",valoipva);
    }
}