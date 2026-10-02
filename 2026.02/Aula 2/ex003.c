# include <stdio.h>
int main() {
    int ano;
    int esbi;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    (ano % 400 == 0 || ((ano % 4 == 0 && !(ano % 100 == 0)))) ? printf("O ano é bissexto. \n"): printf("Não é bissexto. \n");;
}