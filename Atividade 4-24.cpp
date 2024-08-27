#include <stdio.h>
#include <math.h>

int binarioParaDecimal(long long binario) {
    int decimal = 0;
    int base = 1;

    while (binario > 0) {
        int ultimoDigito = binario % 10; 
        binario = binario / 10; 
        decimal += ultimoDigito * base; 
        base = base * 2; 
    }

    return decimal;
}

int main() {
    long long binario;

    printf("Digite um n�mero bin�rio: ");
    scanf("%lld", &binario);

    
    int decimal = binarioParaDecimal(binario);

    printf("O n�mero decimal equivalente �: %d\n", decimal);

    return 0;
}

