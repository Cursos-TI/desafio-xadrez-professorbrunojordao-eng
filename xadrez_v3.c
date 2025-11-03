#include <stdio.h>

// ============================================================
// FUNCOES RECURSIVAS PARA AS PECAS: TORRE, BISPO E RAINHA
// ============================================================

// Função recursiva para o movimento da TORRE
void moverTorre(int casas) {
    if (casas == 0) return; // caso base: nenhuma casa restante
    printf("Direita\n");    // imprime o movimento atual
    moverTorre(casas - 1);  // chamada recursiva para a próxima casa
}

// Função recursiva para o movimento da RAINHA
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do BISPO (com loops aninhados)
void moverBispoRecursivo(int linha, int coluna, int limite) {
    if (linha >= limite) return; // caso base: terminou o movimento
    for (int j = 0; j <= coluna; j++) {
        printf("Cima, Direita\n");
    }
    moverBispoRecursivo(linha + 1, coluna, limite); // recursão vertical
}

// ============================================================
// LOOP COMPLEXO PARA O CAVALO (EM "L" - 2 CIMA, 1 DIREITA)
// ============================================================
void moverCavalo() {
    int movVertical = 2; // duas casas para cima
    int movHorizontal = 1; // uma casa para a direita

    printf("Movimento do CAVALO (em L - 2 cima, 1 direita):\n");

    // Loop externo controla o movimento vertical
    for (int i = 0, j = 0; i < movVertical || j < movHorizontal; i++, j++) {

        // Se ainda houver movimento vertical, imprime "Cima"
        if (i < movVertical) {
            printf("Cima\n");
        }

        // Se o movimento horizontal ainda não começou, continue
        if (i < movVertical - 1) {
            continue; // ignora o resto e volta para o proximo ciclo
        }

        // Quando i atinge o limite, move na horizontal
        if (j < movHorizontal) {
            printf("Direita\n");
        }

        // Interrompe o loop quando ambos os movimentos terminam
        if (i >= movVertical - 1 && j >= movHorizontal - 1) {
            break;
        }
    }

    printf("\n");
}

// ============================================================
// FUNCAO PRINCIPAL
// ============================================================
int main() {

    // ======== Movimento da TORRE ========
    printf("Movimento da TORRE (direita):\n");
    moverTorre(5);  // 5 casas para a direita
    printf("\n");

    // ======== Movimento do BISPO ========
    printf("Movimento do BISPO (diagonal cima-direita):\n");
    moverBispoRecursivo(0, 0, 5); // simula 5 casas
    printf("\n");

    // ======== Movimento da RAINHA ========
    printf("Movimento da RAINHA (esquerda):\n");
    moverRainha(8); // 8 casas para a esquerda
    printf("\n");

    // ======== Movimento do CAVALO ========
    moverCavalo();  // Movimento em "L" (2 cima, 1 direita)

    return 0;
}