#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;
	setlocale(LC_ALL,"");
    
    srand(time(NULL));

    numeroSecreto = rand() % 100 + 1;
    

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Estou pensando em um número entre 1 e 100.\n");
    printf("Tente adivinhar!\n");

      do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSecreto) {
            printf("O número secreto e maior!\n");
        } else if (palpite > numeroSecreto) {
            printf("O número secreto e menor!\n");
        } else {
            printf("Parabens! Voce adivinhou o numero em %d tentativas.\n", tentativas);
        }
    } while (palpite != numeroSecreto);

    return 0;
}

