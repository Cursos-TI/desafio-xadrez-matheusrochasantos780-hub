#include <stdio.h>

int main() {
    // Constantes que definem o número de casas que cada peça vai se mover
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    // Movimentação do Bispo (diagonal superior direita)
    printf("Movimento do Bispo:\n");
    for(int i = 1; i <= BISPO_MOV; i++) {
        printf("Diagonal superior direita - passo %d\n", i);
    }
    printf("\n");

    // Movimentação da Torre (direita)
    printf("Movimento da Torre:\n");
    for(int i = 1; i <= TORRE_MOV; i++) {
        printf("Direita - passo %d\n", i);
    }
    printf("\n");

    // Movimentação da Rainha (esquerda)
    printf("Movimento da Rainha:\n");
    for(int i = 1; i <= RAINHA_MOV; i++) {
        printf("Esquerda - passo %d\n", i);
    }
    printf("\n");

    return 0;
}
