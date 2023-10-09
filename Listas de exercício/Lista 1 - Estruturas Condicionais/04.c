#include <stdio.h>

int main(void){
	float x, y;

	printf("Insira sua altura:\n");
	scanf("%f", &x);

	printf("Insira seu peso:\n");
	scanf("%f", &y);

  printf("\n\tSeu IMC = %f", y /= (x*x));
	
  return 0;
}
