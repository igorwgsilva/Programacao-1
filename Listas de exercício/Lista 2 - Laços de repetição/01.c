#include <stdio.h>

int main(void){
  
  float x;
  do{
    printf("Insira um número entre 0 e 1:\n");
    scanf("%f", &x);
  }while(x<=0 || x>=1);

  return 0;
}
