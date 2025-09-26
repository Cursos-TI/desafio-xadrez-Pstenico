#include <stdio.h>

int main() {

   int bispo = 1, rainha = 1; // Contadores para Bispo e Rainha
   int passo = 1;             // Controla execução única do loop do cavalo

   int opcao;                 // Opção do menu principal

   // ------------------------------ //
   //         Menu principal         //
   // ------------------------------ //
   printf("\n*** Bem-vindo ao desafio da Movimentação de Peças de Xadrez ***\n\n");
   printf("Escolha qual peça você quer movimentar:\n\n");
   printf("1. Torre\n");
   printf("2. Bispo\n");
   printf("3. Rainha\n");
   printf("4. Cavalo\n\n");
   printf("Escolha uma opção: ");
   scanf("%d", &opcao);
   printf("\n");

   // ------------------------------ //
   //      Switch principal          //
   // ------------------------------ //
   switch(opcao) {

      case 1: 
         // ------------------------------ //
         //      Movimento da Torre        //
         // ------------------------------ //
         printf("\nMovimento da Torre:\n\n"); 
         for (int torre = 1; torre <= 5; torre++) { // Torre anda 5 casas para a direita
            printf("Torre moveu-se %d casa(s) para a Direita!\n", torre);
         }
         printf("\n--------------------------------------------------------\n");
         break;
   
      case 2:
         // ------------------------------ //
         //      Movimento do Bispo        //
         // ------------------------------ //
         printf("\nMovimento do Bispo:\n\n");
         while (bispo <= 5) { // Bispo anda 5 casas na diagonal
            printf("Bispo moveu-se %d casa(s) para Cima e Direita!\n", bispo);
            bispo++; // Incrementa até chegar em 5
         }
         printf("\n--------------------------------------------------------\n");
         break;
   
      case 3:
         // ------------------------------ //
         //      Movimento da Rainha       //
         // ------------------------------ //
         printf("\nMovimento da Rainha:\n\n");
         do {
            printf("Rainha moveu-se %d casa(s) para a Esquerda!\n", rainha);
            rainha++; // Incrementa até chegar em 8
         } while (rainha <= 8); // Rainha anda 8 casas para a esquerda
         printf("\n--------------------------------------------------------\n");
         break;
   
      case 4:
         // ------------------------------ //
         //      Movimento do Cavalo       //
         // ------------------------------ //
         printf("\nMovimento do Cavalo:\n\n");

         int opcaoCavalo; // Menu para a seleção de movimento do cavalo

         printf("Escolha uma opção para movimentar o cavalo:\n\n");
         printf("1. (2) movimentos para Cima e (1) para Direita\n");
         printf("2. (2) movimentos para Cima e (1) para Esquerda\n");
         printf("3. (2) movimentos para Baixo e (1) para Direita\n");
         printf("4. (2) movimentos para Baixo e (1) para Esquerda\n\n");
         printf("Escolha uma opção: ");
         scanf("%d", &opcaoCavalo);
         printf("\n");
   
         // ------------------------------ //
         //      Switch do Cavalo          //
         // ------------------------------ //
         switch(opcaoCavalo) {
            case 1: 
               while (passo == 1) {
                  for (int i = 1; i <= 2; i++) {
                     printf("Cavalo moveu-se %d casa(s) para Cima!\n", i);
                  }
                  printf("Cavalo moveu-se 1 casa para a Direita!\n");
                  passo--; 
               }
               break;

            case 2:
               while (passo == 1) {
                  for (int i = 1; i <= 2; i++) {
                     printf("Cavalo moveu-se %d casa(s) para Cima!\n", i);
                  }
                  printf("Cavalo moveu-se 1 casa para a Esquerda!\n");
                  passo--;
               }
               break;

            case 3:
               while (passo == 1) {
                  for (int i = 1; i <= 2; i++) {
                     printf("Cavalo moveu-se %d casa(s) para Baixo!\n", i);
                  }
                  printf("Cavalo moveu-se 1 casa para a Direita!\n");
                  passo--;
               }
               break;

            case 4:
               while (passo == 1) {
                  for (int i = 1; i <= 2; i++) {
                     printf("Cavalo moveu-se %d casa(s) para Baixo!\n", i);
                  }
                  printf("Cavalo moveu-se 1 casa para a Esquerda!\n");
                  passo--;
               }
               break;

            default: 
               printf("Erro: Escolha apenas entre 1 e 4!");
         }
         break;
   
      default: 
         printf("Erro: Escolha apenas entre 1 e 4!");
   }

   return 0; // Fim do programa
}
