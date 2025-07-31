#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    //Movimento Torre
    for(int i = 0; i < 5; i++){
        printf("Torre: Direita \n");
    }

    //Movimento Bispo
    for(int i = 0; i < 5; i++){
        printf("Bispo: Cima, Direita\n");

    }

    //Movimento Rainha

    int passosRainha = 8;

    while(passosRainha > 0){
        printf("Rainha: Esquerda \n");
        passosRainha--;
    }

    
    int movimentocompleto = 1;

    //Movimento do Cavalo com loop aninhado
    while (movimentocompleto--){
        for(int i = 0; i < 2; i++){
            printf("Cavalo: cima\n");
        }
        printf("Cavalo: Direita\n");
    }

    return 0;
}
