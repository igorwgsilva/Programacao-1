#include <stdio.h>

int main(void){

  int x=0, y=0;

  while(x<21){
    printf("Insira um número entre 1 e 10\n");
    scanf("%d", &y);
    if(y>1 && y<10)
      x+=y;
  }

  return 0;
}
