#include <stdio.h> 
int main() {
    char prod1[20];
    float quant1;
    char prod2[20];
    float quant2;
    char prod3[20];
    float quant3;
    printf("Digite o nome de um produto: ");
    scanf("%s", &prod1);
    printf("Digite o preço desse produto: ");
    scanf("%f", &quant1);
    printf("\nDigite o nome de outro produto: ");
    scanf("%s", &prod2);
    printf("Digite o preço desse produto: ");
    scanf("%f", &quant2);
    printf("\nDigite o nome de mais um produto: ");
    scanf("%s", &prod3);
    printf("Digite a quantidade desse produto: ");
    scanf("%f", &quant3);
    printf("\t\nProduto");
    printf("\t    Preço");
    printf("\t\n--------------------------");
    printf("\n %s          R$%.2f\t", prod1, quant1);
    printf("\n %s          R$%.2f\t", prod2, quant2);
    printf("\n %s          R$%.2f\t \n", prod3, quant3);
    return 0;
}