#include <stdio.h>

int main() {

    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 3, 3, 3, 0, 0, 0}, // Navio 2 (Horizontal)
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // Navio 1 (Vertical)
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 3}, // Navio 3 (Diagonal 1)
        {0, 3, 0, 0, 0, 0, 0, 0, 3, 0}, // Navio 4 (Diagonal 2)
        {0, 0, 3, 0, 0, 0, 0, 3, 0, 0}
    };
    // Criando tabileiro 10x10
    printf("  ");
    for (int n =1; n <= 10; n++) {
        printf("%d ",n);
    }

    printf("\n");

     char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Para exibir as coordenadas do Navio 1 (Vertical)
    printf("Coordenadas do Navio 1:\n");
    printf("Parte 1: Linha D, Coluna 1 (Valor: %d)\n", tabuleiro[3][0]);
    printf("Parte 2: Linha E, Coluna 1 (Valor: %d)\n", tabuleiro[4][0]);
    printf("Parte 3: Linha F, Coluna 1 (Valor: %d)\n", tabuleiro[5][0]);

    printf("\nCoordenadas do Navio 2:\n");
    
    printf("O Navio 2 esta na Linha C, entre as colunas 5 e 7.\n");

    printf("\nCordenada do navio 3:\n");

    printf("O Navio 3 está nas linhas H,I e J, Entre as Colunas 1, 2 e 3.\n");

    printf("\nCordenadas do navio 4:\n");

    printf("O Navio 4 está nas linhas H, I e J, Entre as Colunas 8, 9 e 10.\n");

    return 0;
}
    

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0



