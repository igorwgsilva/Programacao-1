#include <stdio.h>
#include <math.h>

int main(void){

	int maior, x, i;

	for(i=0;i<3;i++){    
  printf("Insira um número\n");
  scanf("%d", &x);
    
  if(x>=maior)
    maior = x;
  }
  
  printf("\n\tMaior: %d", maior);

return 0;
}
