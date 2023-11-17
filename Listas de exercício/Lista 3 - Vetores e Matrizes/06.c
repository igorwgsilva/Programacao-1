#include <stdio.h>

void tolower_custom(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            // Se o caractere for uma letra maiúscula, converte para minúscula
            str[i] = str[i] + ('a' - 'A');
        }
        // Caso contrário, o caractere permanece o mesmo
    }
}

int main(void){
  int i, cont=0;
  char v[6],u[6], x = 'A';

  printf("Inserir 2 palavras de cinco letras:\n");
  scanf("%s%s", v, u);

  tolower_custom(v);
  tolower_custom(u);
  
  for(i=0;i<5;i++){
    if(v[i] == u[i]){
      ++cont;
    }
  }

  printf("\n%d letras na mesma posição", cont);

  return 0;
}
