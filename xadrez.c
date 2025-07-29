#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int casas;
    int i;
    char movimento[50];

    for (i = 0; i < 1; i++){
        printf("Digite quantas casas a Torre anda\n");
        scanf("%d", &casas);
        printf("digite a direção do movimento da Torre\n");
        scanf("%d", movimento);
        printf("torre andou: %d casas, na direção: %s\n", casas, movimento);
    }

    return 0;
}
