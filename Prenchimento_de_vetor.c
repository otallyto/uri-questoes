#include <stdio.h>
int main() {
  int vetor[10];
  int i,n,soma=0;
  scanf("%d",&n);
  for (i = 0; i <=9; i++) {
    vetor[i]=n;
    n*=2;
  printf("N[%d] = %d\n",i,vetor[i]);
}


  return 0;
}
