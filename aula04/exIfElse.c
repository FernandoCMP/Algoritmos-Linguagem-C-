#include <stdio.h>
int main(){
  int num;
  printf ("Digite um numero: ");
  scanf("%d", &num);
  if(num == 10){
     printf ("O numero é igual a 10.\n");
  } 
  else{
     printf ("O numero é diferente de 10.\n");
  }
  return 0;
}
