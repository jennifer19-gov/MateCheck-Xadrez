#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    // Bispo: Diagonal superior direita (Cima + Direita)
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre: Direita
    for (int i = 0; i < TORRE_MOV; i++) {
        printf("Direita\n");
    }

    // Rainha: Esquerda
    for (int i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda\n");
    }

    return 0;
}

