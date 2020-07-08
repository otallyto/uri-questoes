#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int vet[101] = {0};
  int n,num,nota=0,aux=0;
  scanf("%d",&n );
  for (int i = 0; i <n; i++) {
    scanf("%d",&num );
    vet[num]++;
  }

  for (int i = 0; i < 101; i++) {
    if (vet[i]>=aux && i>nota) {
      aux = vet[i];
      nota = i;
    }
  }

  printf("%d\n",nota );

  return 0;
}
