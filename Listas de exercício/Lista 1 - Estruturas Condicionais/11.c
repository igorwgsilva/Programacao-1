#include <stdio.h>
#include <math.h>

int main(void){

	float x[10], variance=0, standardDeviation,media=0,sum=0;
  int i;

	for(i=0;i<10;i++){
		printf("Inserir  número:\n");
		scanf("%f", &x[i]);
    media += x[i];
}
  media /= 10;
  
  for(i=0;i<10;i++){
		sum+=pow(x[i]-media, 2);
}
  variance = sum/10;
  printf("\n\tVariância: %f\n", variance);
  printf("\tDesvio padrão: %f", sqrt(variance));


return 0;
}
