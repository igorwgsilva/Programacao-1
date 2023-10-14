#include <stdio.h>

int main(void){

  int x=0;
  do{
    printf("\n\t\tMenu:\n\t1 - Opção 1\n\t2 - Opção 2\n\t3 - Opção 3\n\t4 - Opção 4\n\t5 - Sair\n");
    scanf("%d", &x);
    
    switch (x){
      case 1:
      printf("\nOpção 1\n");
      break;

      case 2:
      printf("\nOpção 2\n");
      break;

      case 3:
      printf("\nOpção 3\n");
      break;

      case 4:
      printf("\nOpção 4\n");
      break;

      case 5:
      break;

    }
    
  }while(x!=5);

  return 0;
}
