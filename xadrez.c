#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    

    for(int i = 0; i < 5; i++){
        printf("Torre: Direita \n");
    }

    for(int i = 0; i < 5; i++){
        for(int i = 0; i < 2; i++){
            printf("Bispo: esquerda");
        }
        print("Bispo: cima");
    }


    int movimentocompleto = 1;

    while (movimentocompleto--){
        for(int i = 0; i < 2; i++){
            printf("Cavalo: cima\n");
        }
        printf("Cavalo: Direita\n");
    }

    return 0;
}
