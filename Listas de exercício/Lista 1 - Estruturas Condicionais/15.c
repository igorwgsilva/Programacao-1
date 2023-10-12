#include <stdio.h>

int main(void){
  int x, y;

  printf("\tInsira o número da operação desejado:\n\t1 - Soma\n\t2 - Multiplicação\n\t3 - Maior\n\t4 - Menor\n");
  scanf("%d", &x);

  while(x>=5 || x<=0){
    printf("\tInsira o número >>CORRETO<< da operação desejado:\n\t1 - Soma\n\t2 - Multiplicação\n\t3 - Maior\n\t4 - Menor\n");
    scanf("%d", &x);
  }

  switch(x){
  case 1:
    printf("Insira dois números:\n");
    scanf("%d%d", &x, &y);
    printf("\n\tSoma: %d + %d = %d", x, y, x+y);
    break;
  
  case 2:
    printf("Insira dois números:\n");
    scanf("%d%d", &x, &y);
    printf("\n\nMultiplicação: %d * %d = %d", x, y, x*y);
    break;
    
  case 3:
    printf("Insira dois números:\n");
    scanf("%d%d", &x, &y);
    if(x>=y)
      printf("\n\nMaior ou igual: %d >= %d", x, y);
   if(y>=x)
      printf("\n\nMaior ou igual: %d >= %d", y, x);
      
    break;
  case 4:
  printf("Insira dois números:\n");
  scanf("%d%d", &x, &y);
    if(x<=y)
      printf("\n\nMenor ou igual: %d <= %d", x, y);
    if(y<=x)
      printf("\n\nMenor ou igual: %d <= %d", y, x);

    break;
  }

  return 0;
}
