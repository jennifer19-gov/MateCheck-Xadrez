#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Funções recursivas
void moverBispo(int n) {
    if (n == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(n - 1);
}

void moverTorre(int n) {
    if (n == 0) return;
    printf("Direita\n");
    moverTorre(n - 1);
}

void moverRainha(int n) {
    if (n == 0) return;
    printf("Esquerda\n");
    moverRainha(n - 1);
}

int main() {
    moverBispo(BISPO_MOV);
    moverTorre(TORRE_MOV);
    moverRainha(RAINHA_MOV);

    // Cavalo: L para cima e direita
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        }
        printf("Movimento em L concluído\n");
    }

    return 0;
}

