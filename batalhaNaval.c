#include <stdio.h>

#define TAM 5 // Tamanho do tabuleiro 5x5

int main() {
    int tabuleiro[TAM][TAM] = {0}; // Inicializa tudo com 0 (água)

    //  NAVIO 1: Vertical (3 posições)
    int navio1_x = 1; // Coluna fixa
    int navio1_y_inicio = 0; // Começa na linha 0

    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1_y_inicio + i][navio1_x] = 1; // Marca com 1 (navio)
    }

    //  NAVIO 2: Horizontal (4 posições)
    int navio2_y = 4; // Linha fixa
    int navio2_x_inicio = 0; // Começa na coluna 0

    for (int i = 0; i < 4; i++) {
        tabuleiro[navio2_y][navio2_x_inicio + i] = 2; // Marca com 2 (navio)
    }

    // Exibindo as coordenadas dos navios
    printf("Coordenadas dos navios posicionados:\n");

    // Percorre o tabuleiro
    for (int y = 0; y < TAM; y++) {
        for (int x = 0; x < TAM; x++) {
            if (tabuleiro[y][x] == 1) {
                printf("Navio 1 (Vertical): (%d, %d)\n", x, y);
            } else if (tabuleiro[y][x] == 2) {
                printf("Navio 2 (Horizontal): (%d, %d)\n", x, y);
            }
        }
    }

    return 0;
}
