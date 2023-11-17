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

  for(i=0;i<3;i++){
    z[i] = v[i] + u[i];
  }
  
  printf("\n");
  
  for(i=0;i<3;i++){
    printf("\n");
    printf("\tz[%d] = %d", i, z[i]);
  }


  return 0;
}
