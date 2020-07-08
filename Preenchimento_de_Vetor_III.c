#include <stdio.h>
int main() {
  int i;
  double resto, num,vetor[100];
  scanf("%lf",&num);
  vetor[0]=num;
  printf("N[0] = %.4f\n",vetor[0]);
  for (i = 1; i < 100; i++) {
    resto=num/2.0;
    vetor[i]=resto;
    num=resto;
    printf("N[%d] = %.4f\n",i,vetor[i]);
  }

  return 0;
}
