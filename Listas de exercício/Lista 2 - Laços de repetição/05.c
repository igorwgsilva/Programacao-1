#include <stdio.h>

int main(void){

  float x=0;

  while(x<=0 || x>=1){
    printf("Insira um valor entre 0 e 1\n");
    scanf("%f", &x);
  }

  return 0;
}
