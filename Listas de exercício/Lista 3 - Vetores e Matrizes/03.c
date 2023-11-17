#include <stdio.h>
#include <math.h>

int main(void){
  int v[3],u[3], modulov, modulou, i;

  for(i=0;i<3;i++){
    printf("\nv[%d] = ",i);
    scanf("%d", &v[i]);
  }

  for(i=0;i<3;i++){
    printf("\nu[%d] = ",i);
    scanf("%d", &u[i]);
  }

  for(i=0;i<3;i++){
    modulov += sqrt(v[i]*v[i]);
    modulou += sqrt(u[i]*u[i]);
  }
  
  printf("\nMódulo de v: %d\nMódulo de u: %d", modulov, modulou);
  


  return 0;
}
