#include <stdio.h>

int main() {
    // ============================================================
    // SIMULADOR DE MOVIMENTOS DE XADREZ - NIVEL NOVATO
    // ============================================================
    // Simula os movimentos da Torre, Bispo e Rainha.
    // Cada peça usa uma estrutura de repeticao diferente.
    // ============================================================

    // ======== Movimento da TORRE ========
    // Torre: move-se horizontalmente ou verticalmente
    // Vamos mover a Torre 5 casas para a direita usando FOR
    int casasTorre = 5;
    printf("Movimento da TORRE (direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ======== Movimento do BISPO ========
    // Bispo: move-se na diagonal
    // Vamos mover o Bispo 5 casas na diagonal para cima e direita usando WHILE
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do BISPO (diagonal cima-direita):\n");
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // ======== Movimento da RAINHA ========
    // Rainha: move-se em todas as direcoes
    // Vamos mover a Rainha 8 casas para a esquerda usando DO-WHILE
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da RAINHA (esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);
    printf("\n");

    return 0;
}