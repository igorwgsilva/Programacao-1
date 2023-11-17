#include <stdio.h>

int main(void){
  int v[3],u[3], z[3], i;

  for(i=0;i<3;i++){
    printf("\nv[%d] = ",i);
    scanf("%d", &v[i]);
  }

  for(i=0;i<3;i++){
    printf("\nu[%d] = ",i);
    scanf("%d", &u[i]);
  }

  z[0] = u[1] * v[2] - u[2] * v[1];
  z[1] = u[2] * v[0] - u[0] * v[2];
  z[2] = u[0] * v[1] - u[1] * v[0];
  
  printf("Produto de u * v:\n");
  
  for(i=0;i<3;i++){
    printf("\n");
    printf("\tz[%d] = %d", i, z[i]);
  }


  return 0;
}
