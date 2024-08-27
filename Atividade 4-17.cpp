#include <stdio.h>

int calcularMDC(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int numero1, numero2;

    
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    
    int mdc = calcularMDC(numero1, numero2);

    
    printf("O MDC de %d e %d e: %d\n", numero1, numero2, mdc);

    return 0;
}

