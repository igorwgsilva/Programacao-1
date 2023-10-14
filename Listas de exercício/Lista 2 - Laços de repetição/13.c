#include <stdio.h>

int main(void){
   int i, x;

  printf("Insira um número inteiro:\n");
  scanf("%d", &x);

  for(i=0;i<=x;i++){
    printf("\t%d", i);

  }

  return 0;
}
