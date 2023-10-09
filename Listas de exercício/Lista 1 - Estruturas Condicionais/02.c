#include <stdio.h>

int main(void){
	int x=0, y=1;
	printf("Insira o %d° inteiro\n", ++x);
	scanf("%d", &x);
	printf("Insira o %d° inteiro\n", ++y);
	scanf("%d", &y);
  
	printf("\n\tResultado do Produto: %d", x *= y);
return 0;
}
