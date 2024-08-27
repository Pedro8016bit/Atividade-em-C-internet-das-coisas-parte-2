#include <stdio.h>
#include <ctype.h> 

int contarVogais(const char *str) {
    int count = 0; 

  
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++; 
        }
    }

    return count; 
}

int main() {
    char str[100];

    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    
    int numeroDeVogais = contarVogais(str);

    // Exibe o resultado
    printf("O número de vogais na string é: %d\n", numeroDeVogais);

    return 0;
}

