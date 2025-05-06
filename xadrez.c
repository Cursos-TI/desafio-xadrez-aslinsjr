#include <stdio.h>

int main() {
    // Constantes para o número de casas a serem movidas por cada peça
    const int TORRE_CASAS = 5;   // Torre se move 5 casas para a direita
    const int BISPO_CASAS = 5;   // Bispo se move 5 casas na diagonal
    const int RAINHA_CASAS = 8;  // Rainha se move 8 casas para a esquerda
    
    // Variável para controle das estruturas de repetição
    int i;
    
    // 1. Simulação do movimento da Torre usando estrutura FOR
    // A Torre se move em linha reta horizontalmente ou verticalmente
    printf("\n--- Movimento da Torre (5 casas para a direita) ---\n");
    for (i = 1; i <= TORRE_CASAS; i++) {
        printf("Direita\n");  // Imprime a direção a cada casa percorrida
    }
    
    // 2. Simulação do movimento do Bispo usando estrutura WHILE
    // O Bispo se move na diagonal
    printf("\n--- Movimento do Bispo (5 casas na diagonal para cima e à direita) ---\n");
    i = 1;  // Reinicializa o contador para novo loop
    while (i <= BISPO_CASAS) {
        printf("Cima Direita\n");  // Imprime a combinação de direções
        i++;  // Incrementa o contador para avançar no loop
    }
    
    // 3. Simulação do movimento da Rainha usando estrutura DO-WHILE
    // A Rainha pode se mover em todas as direções
    printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    i = 1;  // Reinicializa o contador para novo loop
    do {
        printf("Esquerda\n");  // Imprime a direção a cada casa percorrida
        i++;  // Incrementa o contador para avançar no loop
    } while (i <= RAINHA_CASAS);  // Condição de continuação do loop
    
    return 0;  // Encerra o programa com sucesso
}
