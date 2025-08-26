#include <stdio.h>

#define MOVIMENTOS 3

int main() {
    // Cavalo: Movimento em L (Baixo + Esquerda)
    for (int i = 0; i < MOVIMENTOS; i++) {
        int j = 0;
        while (j < 2) {
            if (j == 0) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
            j++;
        }
        printf("Movimento em L concluído\n");
    }

    return 0;
}

