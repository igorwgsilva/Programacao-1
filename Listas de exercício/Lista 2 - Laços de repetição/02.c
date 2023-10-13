/*
printf("Insira uma vogal maiúscula:\n");
scanf(" %c", &x);

Ao adicionar um espaço antes do %c em scanf(" %c", &x), você instrui o scanf a ignorar quaisquer espaços em branco (incluindo novas linhas) no início da entrada antes de ler o caractere. Isso ajuda a garantir que você obtenha apenas o caractere desejado e não seja afetado por caracteres de controle indesejados.
*/
#include <stdio.h>

int main(void){
  
  char x;
  do{
    printf("Insira uma vogal maiúscula:");
    scanf(" %c", &x);
    
  }while(x != 'A' && x != 'E' && x != 'I' && x != 'O' & x != 'U');

  return 0;
}
