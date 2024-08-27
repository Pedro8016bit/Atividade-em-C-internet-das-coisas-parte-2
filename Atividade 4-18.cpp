#include <stdio.h>


int calcularMDC(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int calcularMMC(int a, int b) {
    int mdc = calcularMDC(a, b);
    return (a * b) / mdc;
}

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    int mmc = calcularMMC(numero1, numero2);

    printf("O MMC de %d e %d e: %d\n", numero1, numero2, mmc);

    return 0;
}

