#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("MOVIMENTO DO BISPO\n");
    for (int i = 0; i < 5; i++){
        printf("Cima, Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n");
    printf("MOVIMENTO DA TORRE\n");
    int i = 1;
    while (i <= 5){
        printf("Direita\n");
        i++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int k = 1;
    printf("\n");
    printf("MOVIMENTO DA RAINHA\n");
    do{
        printf("Esquerda\n");
        k++;
    }while (k <= 8);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int i1 = 1;
    printf("\n");
    printf("MOVIMENTO DO CAVALO, CIMA PARA DIREITA\n");
    while (i1 < 2){
        for (int j = 1; j <= 2; j++){
            printf("Cima\n");
        }
        printf("Direita\n");
        i1++;
    }

    int i2 = 1;
    printf("\n");
    printf("MOVIMENTO DO CAVALO, CIMA PARA ESQUERDA\n");
    while (i2 < 2){
        for (int j = 1; j <= 2; j++){
            printf("Cima\n");
        }
        printf("Esquerda\n");
        i2++;
    }

    int i3 = 1;
    printf("\n");
    printf("MOVIMENTO DO CAVALO, BAIXO PARA DIREITA\n");
    while (i3 < 2){
        for (int j = 1; j <= 2; j++){
            printf("Baixo\n");
        }
        printf("Direita\n");
        i3++;
    }

    int i4 = 1;
    printf("\n");
    printf("MOVIMENTO DO CAVALO, BAIXO PARA ESQUERDA\n");
    while (i4 < 2){
        for (int j = 1; j <= 2; j++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        i4++;
    }

    int i5 = 1;
    printf("\n");
    printf("MOVIMENTO DO CAVALO, ESQUERDA PARA CIMA\n");
    while (i5 < 2){
        for (int j = 1; j <= 2; j++){
            printf("Esquerda\n");
        }
        printf("Cima\n");
        i5++;
    }

    int i6 = 1;
    printf("\n");
    printf("MOVIMENTO DO CAVALO, ESQUERDA PARA BAIXO\n");
    while (i6 < 2){
        for (int j = 1; j <= 2; j++){
            printf("Esquerda\n");
        }
        printf("Baixo\n");
        i6++;
    }

    int i7 = 1;
    printf("\n");
    printf("MOVIMENTO DO CAVALO, DIREITA PARA CIMA\n");
    while (i7 < 2){
        for (int j = 1; j <= 2; j++){
            printf("Direita\n");
        }
        printf("Cima\n");
        i7++;
    }

    int i8 = 1;
    printf("\n");
    printf("MOVIMENTO DO CAVALO, DIREITA PARA BAIXO\n");
    while (i8 < 2){
        for (int j = 1; j <= 2; j++){
            printf("Direita\n");
        }
        printf("Baixo\n");
        i8++;
    }
    
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
