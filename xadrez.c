#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Movimento Torre
void movimentoTorre(){
    
    for(int i = 0; i < 5; i++){
        printf("Torre: Direita\n");
    }

}

//Movimento Bispo
void movimentoBispo(){
    int movimentoCompleto = 1;
    while (movimentoCompleto--){
        for (int i = 0, j = 5; i < j || j > i; i++, j--)
        {
            printf("Bispo: Direita\n");
            printf("Bispo: cima\n");
        }
        
    }
    

}

//Movimento Rainha
void movimentoRainha(){

    int passosRainha = 8;
    while(passosRainha > 0){ 
    printf("Rainha: Esquerda\n");
    passosRainha--;
    }
    
}

//Movimento Cavalo
void movimentoCavalo(){
    int movimentocompleto = 1;

    while (movimentocompleto--){
        for(int i = 0, j = 3; i < j || j > i; i++, j--){
            printf("Cavalo: cima\n");
        }
        printf("Cavalo: Direita\n");
    }

}

int main() {

    movimentoTorre();
    movimentoBispo();
    movimentoRainha();
    movimentoCavalo();

    return 0;
}
