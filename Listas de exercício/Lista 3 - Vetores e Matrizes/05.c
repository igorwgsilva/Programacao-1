#include <stdio.h>


int main(void){
  int i, cont=0;
  char v[6],u[6], x = 'A';

  printf("Inserir 2 palavras de cinco letras:\n");
  scanf("%s%s", v, u);

  
  for(i=0;i<5;i++){
    if(v[i] == u[i]){
      ++cont;
    }
  }

  printf("\n%d letras na mesma posição", cont);

  return 0;
}
