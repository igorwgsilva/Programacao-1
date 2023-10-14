#include <stdio.h>

int main(void){

  float x=1, y;
  int i=1;
  printf("Insira 9 números reais:\n");

  while(x<=9){
    printf("Insira o %d° número real:\n", i++);
    scanf("%f", &y);
    x++;

  }
  return 0;
}
