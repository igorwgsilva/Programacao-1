#include <stdio.h>

int main(void){
  int x,y,z;

  printf("Insira três inteiros:\n");
  scanf("%d%d%d", &x,&y,&z);

  // caso x maior
  if(x>y && x>z){
    if(y>z){    
      printf("ordem crescente: %d %d %d", z, y, x);
    }else{
      printf("ordem crescente: %d %d %d", y, z, x);
    }
}

  // caso y maior
  if(y>x && y>z){
    if(x>z){    
      printf("ordem crescente: %d %d %d",z, x, y);
    }else{
      printf("ordem crescente: %d %d %d",x, z, y);
    }
}

  // caso z maior
  if(z>x && z>y){
    if(x>y){    
      printf("ordem crescente: %d %d %d",y, x, z);
    }else{
      printf("ordem crescente: %d %d %d",x, y, z);
    }
}
  

  
  return 0;
}
