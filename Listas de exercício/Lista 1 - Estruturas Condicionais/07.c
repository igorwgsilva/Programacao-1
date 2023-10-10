#include <stdio.h>

int main(void){
	int x;

	printf("Insira um número inteiro:\n");
	scanf("%d", &x);

	if(x % 7 == 0)
		printf("\n\t%d é múltiplo de 7", x);
	else
		printf("\n\t%d não é múltiplo de 7", x);

return 0;
}
