#include <stdio.h>
// Desafio de Xadrez - MateCheck
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int Bispo=1;
    int Torre=1;
    int Rainha=1;

    // Implementação de Movimentação do Bispo
    printf("Movimento Bispo:(movimento diagonal)\n");  
    while(Bispo<=5){
        printf("Cima\nDireita\n");
        Bispo++;
    }    
    printf("-----------------------------------------------------\n");
    // Implementação de Movimentação da Torre
    printf("Movimento Torre:\n");
    do{
        printf("Direita\n");
        Torre++;
    } while (Torre<=5);
    printf("-----------------------------------------------------\n");

    // Implementação de Movimentação da Rainha
    printf("Movimento Rainha:\n");
    for (Rainha=1; Rainha<=8; Rainha++){
        printf("Esqueda\n");    
    }    


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
