#include <stdio.h>

// Desafio de Xadrez - Feito pelo aluno Luis Rizzuto

int main() {

    int torre = 0; //Variável feita para a movimentação da Torre
    int bispo = 1; //Variável feita para a movimentação do Bispo
    int cavalo = 1; //Variável feita para a movimentação do Cavalo
    int L = 1; //Variável feita para trocar o lado da movimentação do Cavalo

    printf("Agora vai começar o Desafio Xadrez feito pelo Aluno Luis Rizzuto !\n"
    "4 peças irão se mover, preparado para começar? Lá vamos nôs!!\n"
    "Começando pela torre que irá mover 5 casas..\n");

    //Aqui vamos fazer um Do-While para a torre, 5 casas para a direita
    do{
        printf("Direita %d\n", torre);
        torre++;
    } while(torre <= 5);

    //Aqui vamos fazer um While para o Bispo, 5 casas em diagonal direita e cima
    printf("----------------------\n");
    printf("Agora a movimentação do Bispo, também 5 casas\n");
        
    while(bispo != 6){
        printf("Direita, Cima %d\n", bispo);
        bispo++;
    }

    //Aqui vamos fazer um For para a Rainha, 8 casas para a esquerda
    printf("----------------------\n");
    printf("Agora a movimentação da Rainha, 8 casas\n");
    
    for(int queen = 1; queen <= 8; queen++){
        printf("Esquerda %d \n", queen);
    };

    //Aqui vamos fazer um para o Cavalo, 3 casas (2 pra baixo e 1 para esquerda, em forma de L)
    printf("----------------------\n");
    printf("Agora a movimentação do Cavalo, 3 casas\n");

    do{
        while(cavalo < 3){
            printf("Baixo %d \n", cavalo);
            cavalo++;
        }
        
        L++;
        printf("Esquerda %d\n", L);

    }while(L <= 2);
    
    printf("Acabou!");

    return 0;
}
