#include <stdio.h>

int main(void){

  int x=0, y=0;
  do{
    printf("Insira um número entre 1 e 10:\n");
    scanf("%d", &y);
    if(y>=1 && y <=10)
      x+=y;
    
    /* Forma alternativa
    do{
      printf("Insira um número entre 1 e 10:\n");
      scanf("%d", &y);
    }while(y<1 || y >10);
    x+=y;
    */
  }while(x<21);

  return 0;
}
