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
  char v[21];

  printf("Inserir 1 palavra de vinte letras:\n");
  scanf("%s", v);

  tolower_custom(v);
  
  for(i=0;i<21;i++){
    if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u'){
      ++cont;
    }
  }

  printf("\n%d vogais", cont);

  return 0;
}
