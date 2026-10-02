# include <stdio.h>
int main() {
    int idade;
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    if (idade < 18) {
        printf("O plano custará R$150.\n");
    }
    if (idade >= 18 && idade < 30  ) {
        printf("O plano custará R$200.\n");
    }
    if (idade >= 30 && idade < 46) {
        printf("O plano custará R$300.\n");
    }
    if (idade >= 46 && idade < 66) {
        printf("O plano custará R$400.\n");
    }
    if (idade > 65) {
        printf("O plano custará R$500.\n");
    }
}