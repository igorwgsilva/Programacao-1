#include <stdio.h>

int main(void){
	int x, y;

	printf("Insira o 1° inteiro:\n");
	scanf("%d", &x);
	printf("Insira o 2° inteiro:\n");
	scanf("%d", &y);
  
  if(x>y)
    printf("%d > %d", x, y);
  if(x<y)
    printf("%d < %d", x, y);
  if(x==y)
    printf("%d = %d", x, y);

return 0;
}
