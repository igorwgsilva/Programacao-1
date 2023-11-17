#include <stdio.h>
#include <math.h>

int main(void){
  int modulo=0, i, n, *vet;

  printf("Inserir tamanho do vetor:\n");
  scanf("%d", &n);

  vet = (int *) malloc(n * sizeof(int)); //Alocação

  for(i=0;i<n;i++){
    printf("\nv[%d] = ",i);
    scanf("%d", &vet[i]);
  }

  for(i=0;i<n;i++){
    modulo += sqrt(vet[i]*vet[i]);
  }
  
  printf("\nMódulo do vetor: %d", modulo);

  free(vet);
  


  return 0;
}
