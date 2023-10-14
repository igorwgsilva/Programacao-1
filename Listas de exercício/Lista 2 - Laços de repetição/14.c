#include <stdio.h>

int main(void){
  
  char x=0,i=0;
  
  while(x<'a'||x>'z'){
    printf("Digite uma letra minúscula :\n");
    scanf(" %c", &x);
  }
  
  if(x>='a'&&x<='z'){
    printf("De a até %c:\n",x);
    for(i='a';i<=x;i++)
      printf("%c\t", i);
}

  return 0;
}
