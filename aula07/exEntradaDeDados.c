#include<stdio.h>
int main() {
   int mat[3][2];
   int i,j;
   //Recebendo os Dados da matriz
   for (i = 0; i < 3; i++){
      for (j = 0; j < 2; j++){
         printf("Digite o valor de mat[%d][%d]: ",i,j);
         scanf("%d",&mat[i][j]);
      }
   }
  //Exibindo os Dados da matriz
  for (i = 0; i < 3; i++){
      for (j = 0; j < 2; j++){
         printf(" %d ",mat[i][j]);
      }
      printf("\n"); //quebra de linha para mostrar os dados em forma de tabela
  }
   return 0;
}
