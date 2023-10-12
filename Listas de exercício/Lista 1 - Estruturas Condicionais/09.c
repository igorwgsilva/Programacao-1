#include <stdio.h>

int main(void){

  float x, massa, cal;

  printf("Insira o peso da lasanha em gramas:\n");
  scanf("%f", &massa);

  x = massa * 0.073;
  cal = x * 9;
  
  x = massa * 0.117;
  cal = cal + (x*4);

  x = massa * 0.06;
  cal = cal + (x*4);

  printf("Total de calorias: %f", cal);
  
    



  return 0;
}
