#include <stdio.h>

int ehNumeroPerfeito(int num) {
    int soma = 0;

 
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

   
    return soma == num;
}

int main() {
    int numero;

    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (ehNumeroPerfeito(numero)) {
        printf("%d e um numero perfeito.\n", numero);
    } else {
        printf("%d nao e um numero perfeito.\n", numero);
    }

    return 0;
}

