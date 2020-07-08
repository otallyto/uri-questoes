#include <stdio.h>
int main() {
  int vet[20],i,n,aux;
  for (i = 0; i <20; i++) {
    scanf("%d",&n);
    vet[i]=n;
  }
  aux=vet[0];
  vet[0]=vet[19];
  vet[19]=aux;
  for (i = 1; i <19; i+=2) {
    aux=vet[i];
    vet[i]=vet[i+1];
    vet[i+1]=aux;
  }
  for (i = 0; i < 20; i++) {
    printf("N[%d] = %d\n",i,vet[i]);
  }
  return 0;
}
