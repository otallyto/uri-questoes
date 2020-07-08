#include <stdio.h>
int main() {
  int vetor[10];
  int i,n;
  for (i = 0; i <10; i++) {
    scanf("%d",&n);
    if (n<=0) {
      vetor[i]=1;
    }
    else{
      vetor[i]=n;
    }
  printf("X[%d] = %d\n",i,vetor[i]);
}
  return 0;
}
