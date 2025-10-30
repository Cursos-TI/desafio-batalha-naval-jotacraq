#include <stdio.h>

int main() {
    printf("===== BATALHA NAVAL - NÍVEL MESTRE =====\n\n");

    int tabuleiro[10][10] = {0};

    for (int j = 2; j < 7; j++) tabuleiro[2][j] = 3;
    for (int i = 4; i < 8; i++) tabuleiro[i][5] = 3;
    for (int i = 0; i < 4; i++) tabuleiro[i][i] = 3;
    for (int i = 0; i < 4; i++) tabuleiro[i][9 - i] = 3;

    printf("=== TABULEIRO 10x10 (3 = navio / 0 = vazio) ===\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n===== HABILIDADES ESPECIAIS =====\n");

    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < 5; j++) cone[2][j] = 1;

    for (int i = 0; i < 5; i++) cruz[i][2] = 1;
    for (int j = 0; j < 5; j++) cruz[2][j] = 1;

    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][0] = octaedro[2][1] = octaedro[2][2] = octaedro[2][3] = octaedro[2][4] = 1;
    octaedro[3][1] = octaedro[3][2] = octaedro[3][3] = 1;
    octaedro[4][2] = 1;

    printf("\n--- Habilidade: Cone ---\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", cone[i][j]);
        printf("\n");
    }

    printf("\n--- Habilidade: Cruz ---\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", cruz[i][j]);
        printf("\n");
    }

    printf("\n--- Habilidade: Octaedro ---\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", octaedro[i][j]);
        printf("\n");
    }

    return 0;
}
