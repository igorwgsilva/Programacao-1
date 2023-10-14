#include <stdio.h>

int main(void){
  float i, x, y;
  
  printf("Insira dois números inteiros:\n");
  scanf("%f%f", &x, &y);

  if(x>y){
    for(i=y;i<=x;i+=0.1){
      printf("\t%.1f", i);
    }
  }else{
    for(i=x;i<=y;i+=0.1){
      printf("\t%.1f", i);
    
  }
  }
  

  return 0;
}
