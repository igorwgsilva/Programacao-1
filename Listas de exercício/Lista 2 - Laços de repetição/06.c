#include <stdio.h>

int main(void){

  char x;

  while(x != 'A' && x != 'E' && x != 'I' && x != 'O' & x != 'U'){
    printf("Insira uma vogal maiúsculo\n");
    scanf(" %c", &x);
  }

  return 0;
}
