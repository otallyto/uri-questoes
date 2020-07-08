#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int test,i,j,k;
  int vet[6] = {0},vetAux[1000]={0};
  int tam = 0,flag = 0,aux;
  int d0,d1,d2,d3,d4,d5;
  scanf("%d",&test);
  for (i = 0; i < test; i++) {
    flag =0;
    for (j = 1; j <= 6; j++) {
      scanf("%d",&aux);
      vet[j]=aux;
      vetAux[aux]++;
    }
    if (vet[1] + vet[6] == vet[2] + vet[4] && vet[2] + vet[4] == vet[3] + vet[5] && flag == 0) {
      printf("SIM\n");
    }
    else{
      printf("NAO\n");
    }

  }
  return 0;
}
/*
scanf("%d",&d0);
scanf("%d %d %d %d",&d1,&d2,&d3,&d4);
scanf("%d",&d5);

for (k = 1; k <=6; k++) {
  if (vetAux[k]>1) {
    flag++;
  }
}
*/
