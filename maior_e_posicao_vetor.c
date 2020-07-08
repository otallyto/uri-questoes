#include <stdio.h>
int main() {
  int n,m,i,j,menor,posicao=0;
  scanf("%d",&n);
  int vetor[n];
  for (i = 0; i < n; i++) {
    scanf("%d",&m);
    vetor[i]=m;
  }
  menor=vetor[0];
  for (j = 1; j < n; j++) {
    if (menor>vetor[j]) {
      menor=vetor[j];
      posicao=j;
    }
  }

  printf("Menor valor: %d\n",menor);
  printf("Posicao: %d\n",posicao);

  return 0;
}
