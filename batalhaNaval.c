#include <stdio.h>

int main() {
    // Tabuleiro 10x10, cheio de 0 = tudo vazio no começo
    int tabuleiro[10][10] = {0};

    // NAVIO 1 - Vertical (tamanho 4) na coluna 2 (x = 2)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][2] = 3;
    }

    // NAVIO 2 - Horizontal (tamanho 5) na linha 6 (y = 6)
    for (int i = 0; i < 5; i++) {
        tabuleiro[6][i] = 3;
    }

    // NAVIO 3 - Diagonal principal (↘) começando em (1,1), tamanho 4
    for (int i = 0; i < 4; i++) {
        tabuleiro[1 + i][1 + i] = 3;
    }

    // NAVIO 4 - Diagonal secundária (↙) começando em (3,6), indo pra esquerda em baixo
    for (int i = 0; i < 4; i++) {
        tabuleiro[3 + i][6 - i] = 3;
    }

    // Agora vamos exibir o tabuleiro completo
    printf("Tabuleiro Batalha Naval - Nível Aventureiro:\n\n");
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            printf("%d ", tabuleiro[y][x]);
        }
        printf("\n"); // quebra linha depois de cada linha do tabuleiro
    }

    return 0;
}

