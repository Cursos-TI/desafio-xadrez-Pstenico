#include <stdio.h>

// ------------------------------ //
//      Função recursiva Torre    //
// ------------------------------ //
// Torre anda em linha reta (horizontal).
// A cada chamada recursiva, anda 1 casa para a direita.
void moverTorre(int casas) {
    if (casas > 0) {
        moverTorre(casas - 1); 
        printf("Direita\n");   // imprime movimento atual
    }
}

// ------------------------------ //
//      Função recursiva Bispo    //
// ------------------------------ //
// Bispo anda em diagonal (mesmo número de casas na vertical e horizontal).
// Usa recursividade para ir até a casa final.
// Dentro de cada recursão, usa loops aninhados:
// - Loop externo: movimento vertical (Cima)
// - Loop interno: movimento horizontal (Direita)
void moverBispo(int casas) {
    if (casas > 0) {
        moverBispo(casas - 1); // chamada recursiva para movimentos anteriores

        // Loop externo = movimento vertical
        for (int i = 1; i <= 1; i++) {
            printf("Cima\n");

            // Loop interno = movimento horizontal
            for (int j = 1; j <= 1; j++) {
                printf("Direita\n");
            }
        }
    }
}

// ------------------------------ //
//      Função recursiva Rainha   //
// ------------------------------ //
// Rainha aqui anda em linha reta para a esquerda.
void moverRainha(int casas) {
    if (casas > 0) {
        moverRainha(casas - 1); 
        printf("Esquerda\n");
    }
}

// ------------------------------ //
//  Função Cavalo (sem recursão)  //
// ------------------------------ //
// O cavalo anda em "L": 2 casas para cima + 1 para a direita.
// Implementado apenas com loops aninhados e controle de fluxo.
void moverCavalo() {
    // Primeiro: movimento vertical (2 casas para cima)
    for (int i = 1; i <= 2; i++) {
        printf("Cima\n");
    }

    // Depois: movimento horizontal (1 casa para a direita)
    for (int j = 1; j <= 2; j++) {
        if (j == 1) {
            printf("Direita\n");
            break; // sai logo após o movimento correto
        } else {
            continue; // demonstra uso de continue
        }
    }
}

// ------------------------------ //
//              MAIN              //
// ------------------------------ //
int main() {

    int opcao;

    printf("\n*** Bem-vindo ao desafio da Movimentação de Peças de Xadrez ***\n\n");
    printf("Escolha qual peça você quer movimentar:\n\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("\n");

    switch(opcao) {
        case 1:
            printf("\nMovimento da Torre:\n\n");
            moverTorre(5); // Torre anda 5 casas para a direita
            printf("\n--------------------------------------------------------\n");
            break;

        case 2:
            printf("\nMovimento do Bispo:\n\n");
            moverBispo(5); // Bispo anda 5 casas na diagonal
            printf("\n--------------------------------------------------------\n");
            break;

        case 3:
            printf("\nMovimento da Rainha:\n\n");
            moverRainha(8); // Rainha anda 8 casas para a esquerda
            printf("\n--------------------------------------------------------\n");
            break;

        case 4:
            printf("\nMovimento do Cavalo:\n\n");
            moverCavalo(); // Cavalo faz 1 movimento em "L"
            printf("\n--------------------------------------------------------\n");
            break;

        default:
            printf("Erro: Escolha apenas entre 1 e 4!\n");
    }

    return 0;
}
