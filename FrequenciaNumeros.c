#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int vet[2005] = {0};
  int n,i,aux;
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    scanf("%d",&aux);
    vet[aux]++;
  }
  for (i = 0; i < 2005; i++) {
    if (vet[i]!=0) {
      printf("%d aparece %d vez(es)\n",i,vet[i]);
    }
  }
  return 0;
}
