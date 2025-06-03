#include <stdio.h>

int main() {
    // Criando o tabuleiro 5x5 e preenchendo tudo com 0 (representa "água")
    int tabuleiro[5][5] = {0};

    // Posicionando o NAVIO 1 (vertical) com tamanho 3 na coluna 1 (x = 1)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][1] = 1; // i é a linha (y), 1 é a coluna (x)
    }

    // Posicionando o NAVIO 2 (horizontal) com tamanho 4 na linha 4 (y = 4)
    for (int i = 0; i < 4; i++) {
        tabuleiro[4][i] = 2; // 4 é a linha (y), i é a coluna (x)
    }

    // Exibindo as coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5; x++) {
            if (tabuleiro[y][x] == 1) {
                printf("Navio 1 (Vertical) em: (%d, %d)\n", x, y);
            } else if (tabuleiro[y][x] == 2) {
                printf("Navio 2 (Horizontal) em: (%d, %d)\n", x, y);
            }
        }
    }

    return 0;
}

