#include <stdio.h>


int calcularDeterminante2x2(int matriz[2][2]) {
    return (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
}

int main() {
    int matriz[2][2];

    printf("Digite os elementos da matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int determinante = calcularDeterminante2x2(matriz);

    printf("\nO determinante da matriz 2x2 é: %d\n", determinante);

    return 0;
}

