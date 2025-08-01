#include <stdio.h>

//Movimento Torre
void movimentoTorre(int casas){
    
    if(casas > 0){
        printf("Torre: Direita \n");
        movimentoTorre(casas - 1);
    }

}

//Movimento Bispo
void movimentoBispo(){
    int movimentoCompleto = 1;
    while (movimentoCompleto--){
        for (int i = 0, j = 5; i < j || j > i; i++, j--){
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
    movimentoTorre(5);
    movimentoBispo();
    movimentoRainha();
    movimentoCavalo();

    return 0;
}                                                                                                