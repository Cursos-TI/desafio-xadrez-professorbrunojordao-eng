#include <stdio.h>

int main() {
    // ============================================================
    // SIMULADOR DE MOVIMENTOS DE XADREZ - NIVEL AVENTUREIRO
    // ============================================================
    // Simula os movimentos da Torre, Bispo, Rainha e Cavalo.
    // ============================================================

    // ======== Movimento da TORRE ========
    int casasTorre = 5;
    printf("Movimento da TORRE (direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ======== Movimento do BISPO ========
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do BISPO (diagonal cima-direita):\n");
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // ======== Movimento da RAINHA ========
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da RAINHA (esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);
    printf("\n");

    // ======== Movimento do CAVALO ========
    // Cavalo: movimento em "L" -> 2 casas para baixo + 1 casa para a esquerda
    int casasBaixo = 2;
    int casasEsquerda = 1;
    int contadorL = 0;
    printf("Movimento do CAVALO (em L - 2 baixo, 1 esquerda):\n");

    // Loop externo while controla a repeticao do movimento completo
    while (contadorL < 1) {  // apenas um movimento "L" no exemplo
        // Loop interno for movimenta 2 casas para baixo
        for (int i = 0; i < casasBaixo; i++) {
            printf("Baixo\n");
        }
        // Movimenta 1 casa para esquerda
        for (int j = 0; j < casasEsquerda; j++) {
            printf("Esquerda\n");
        }
        contadorL++;  // atualiza contador do movimento "L"
    }

    printf("\n");

    return 0;
}