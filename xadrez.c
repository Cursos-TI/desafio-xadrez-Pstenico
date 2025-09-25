#include <stdio.h>

int main() {

   int bispo = 1, rainha = 1; // Contadores para o Bispo e Rainha

   //------------------------------//
   //      Movimento da Torre      //
   //------------------------------//
   for (int torre = 1; torre <= 5; torre++){ // Int torre criada dentro do for e movimento da torre 5 casas para a direita
      printf("Torre moveu-se %d casa(s) para a Direita!\n", torre); // Mostra cada movimento
   }

   printf("\n--------------------------------------------------------\n"); // Linha só pra separar

   //------------------------------//
   //      Movimento do Bispo      //
   //------------------------------//
   while (bispo <= 5){ // Bispo anda 5 casas na diagonal
      printf("Bispo moveu-se %d casa(s) para Cima e Direita!\n", bispo); // Movimento na diagonal
      bispo++; // Incrementa a quantidade de casas percorridas até 5
   }

   printf("\n--------------------------------------------------------\n"); // Linha só pra separar

   //------------------------------//
   //      Movimento da Rainha     //
   //------------------------------//
   do { 
      printf("Rainha moveu-se %d casa(s) para a Esquerda!\n", rainha); // Rainha anda para a esquerda
      rainha++; // Incrementa até chegar em 8
   } while (rainha <= 8); // Rainha anda 8 casas para a esquerda

   return 0; // Fim do programa
}
