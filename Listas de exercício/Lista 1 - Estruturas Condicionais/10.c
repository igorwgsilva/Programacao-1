#include <stdio.h>

int main(void){

  float x=0, sigma=0;
  int i;

  printf("Insira dez números reais:\n");

  for(i=1;i<11;i++){
    
  printf("Insira o %d° inteiro:\n", i);  
  scanf("%f", &x);
  sigma += x;

  }

  printf("Somatório : %f", sigma);
  

  return 0;
}
