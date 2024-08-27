#include <stdio.h>
#include <ctype.h> 

int stringParaInteiro(const char *str) {
    int resultado = 0; 
    int sinal = 1;     
    int i = 0;       
    
    while (str[i] == ' ') {
        i++;
    }

    if (str[i] == '-') {
        sinal = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] != '\0' && isdigit(str[i])) {
        resultado = resultado * 10 + (str[i] - '0');
        i++;
    }

    return sinal * resultado; 
}

int main() {
    char str[100];

   
    printf("Digite uma string que representa um número inteiro: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int numero = stringParaInteiro(str);

    
    printf("O número convertido é: %d\n", numero);

    return 0;
}

