#include <stdio.h>

int main(void){
  int carta;

  printf("\tInsira o número da carta desejado:\n\t1 - Copas\n\t2 - Espadas\n\t3 - Paus\n\t4 - Ouro\n");
  scanf("%d", &carta);

  while(carta>=5 || carta<=0){
    printf("\tValor Incorreto, escolher somente uma das opções abaixo:\n\t1 - Copas\n\t2 - Espadas\n\t3 - Paus\n\t4 - Ouro\n");
    scanf("%d", &carta);
  }

  switch(carta){
    case 1:
      printf("\tPoder de ataque: %d", carta*=1);
    break;
    case 2:
      printf("\tPoder de ataque: %d", carta*=2);
    break;
    case 3:
      printf("\tPoder de ataque: %d", carta*=3);
    break;
    case 4:
      printf("\tPoder de ataque: %d", carta*=5);
    break;
  }

  return 0;
}
