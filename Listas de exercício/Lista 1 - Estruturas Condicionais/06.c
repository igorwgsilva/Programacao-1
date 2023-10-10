#include <stdio.h>

int main(void){
	int x;

	printf("Insira um valor inteiro:\n");
	scanf("%d", &x);

  if( x % 2 == 0)
    printf("%d é par", x);  
   else
    printf("%d é ímpar", x);

  return 0;
}
