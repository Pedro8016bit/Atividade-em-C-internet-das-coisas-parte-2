#include <stdio.h>

#define LINHAS 3 
#define COLUNAS 3 

void lerMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somarMatrizes(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS], int matrizResultado[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int matriz1[LINHAS][COLUNAS];
    int matriz2[LINHAS][COLUNAS];
    int matrizResultado[LINHAS][COLUNAS];

    printf("Preencha a primeira matriz:\n");
    lerMatriz(matriz1);

    printf("Preencha a segunda matriz:\n");
    lerMatriz(matriz2);

    somarMatrizes(matriz1, matriz2, matrizResultado);

    printf("\nMatriz 1:\n");
    imprimirMatriz(matriz1);

    printf("\nMatriz 2:\n");
    imprimirMatriz(matriz2);

    printf("\nMatriz Resultado (Soma):\n");
    imprimirMatriz(matrizResultado);

    return 0;
}

