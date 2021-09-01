#include <stdio.h>
int main(){
  char ch;
  printf("Digite um simbolo de pontuacao:");
  ch = getchar();
  switch( ch ) {
    case '.': printf("Ponto.\n"); break;
    case ',': printf("Vírgula.\n"); break;
    case ':': printf("Dois pontos.\n"); break;
    case ';': printf("Ponto e Vírgula.\n"); break;
    default : printf("Não é pontuação.\n");
  }
  return 0;
}
