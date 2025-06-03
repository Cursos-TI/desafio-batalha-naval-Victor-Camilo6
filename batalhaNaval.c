#include <stdio.h>

// Função para imprimir uma matriz qualquer (usada pra todas as habilidades)
void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // HABILIDADE: Cone (3 linhas x 5 colunas)
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    // HABILIDADE: Octaedro (3 linhas x 5 colunas)
    int octaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // HABILIDADE: Cruz (3 linhas x 5 colunas)
    int cruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    // Exibindo as habilidades
    printf("🔺 Habilidade: Cone\n");
    imprimirMatriz(3, 5, cone);

    printf("🔷 Habilidade: Octaedro\n");
    imprimirMatriz(3, 5, octaedro);

    printf("➕ Habilidade: Cruz\n");
    imprimirMatriz(3, 5, cruz);

    return 0;
}
