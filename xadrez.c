#include <stdio.h>
// Desafio de Xadrez - MateCheck
int main() {
    // Nível Aventureiro - Movimentação do Cavalo
    //Declaração de variaveis:
    int Bispo=1; //Uma em cada linha para melhor visualização
    int Torre=1;
    int Rainha=1;
    int Cavalo=1;
    int J=1;

    // Implementação de Movimentação do Bispo
    printf("Movimento Bispo:\n");  
    while(Bispo<=5){//A variavel Bispo começa com 1
        printf("Cima\nDireita\n");//Se refere ao movimento diagonal
        Bispo++; //Incrementa 1 até Bispo ficar 5 e o loop acabar
    }    
    printf("-----------------------------------------------------\n");
    // Implementação de Movimentação da Torre
    printf("Movimento Torre:\n");
    do{
        printf("Direita\n");
        Torre++;//Incrementa 1 até Torre ficar com 5 e o loop acabar
    } while (Torre<=5);
    printf("-----------------------------------------------------\n");

    // Implementação de Movimentação da Rainha
    printf("Movimento Rainha:\n");
    for (Rainha=1; Rainha<=8; Rainha++){//Rainha começa com 1 e vai sofrer incremento até chegar 8
        printf("Esquerda\n");    
    }    
    printf("-----------------------------------------------------\n");
    // Implementação de Movimentação do cavalo
    printf("Movimento Cavalo:\n");
        for(J=1; J<=1;J++){  //O movimento para esquerda só vai ocorrer quando o loop While acabar
            while (Cavalo<=2){//Se move duas vezes para baixo
                printf("Baixo\n");
                Cavalo++;
            }
            printf("Esquerda\n");//Se move apenas uma vez para esquerda para fazer o movimento L
        }        
        
    return 0;
}
