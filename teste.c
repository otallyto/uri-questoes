#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int test,i,j,k;
  int flag = 0,aux;
  int vet[6] = {0};
  scanf("%d",&test);
  for (i = 0; i < test; i++) {
    flag = 0;
    int vetAux[100001] = {0};
    for (j = 0; j <6; j++) {
      scanf("%d",&aux);
      if (aux>6) {
        flag++;
      }
      vet[j] = aux;
      vetAux[aux]++;
    }
    for (k = 0; k < 100001; k++) {
      if (vetAux[k]>1) {
        flag++;
      }
    }
    if (vet[0] + vet[5] == vet[1] + vet[3] && vet[1] + vet[3] == vet[2]+ vet[4] && flag==0) {
      printf("SIM\n");
    }
    else{
      printf("NAO\n");
    }
  }
  return 0;
}
/*scanf("%d",&d0);
scanf("%d %d %d %d",&d1,&d2,&d3,&d4);
scanf("%d",&d5);*/
