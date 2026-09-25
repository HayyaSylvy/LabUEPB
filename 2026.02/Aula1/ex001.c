#include <stdio.h>

#define PI 3.1415926
#define GRAV 9.80665

int main() {
    int casaspi;
    int casasgrav;

    printf("Entre a quantidade de casas decimais para pi: ");
    scanf("%d", &casaspi);

    printf("Entre a quantidade de casas decimais para a gravidade: ");
    scanf("%d", &casasgrav);
    
    printf("PI: %.*f\n", casaspi, PI);
    printf("Gravidade: %.*f\n", casasgrav, GRAV);

    return 0;
}