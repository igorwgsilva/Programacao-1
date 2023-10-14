#include <stdio.h>

int main(void){
  float i, x;
  
  printf("Insira um número inteiro:\n");
  scanf("%f", &x);

  for(i=0;i<=x;i+=0.1){
    printf("\t%.1f", i);

  }

  return 0;
}
