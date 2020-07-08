#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int vet[7] = {0},vetAux[7] = {0},aux = 0;
  for (int i = 0; i < 6; i++) {
    scanf("%d",&vet[i] );
  }

  for (int i = 0; i < 6; i++) {
    scanf("%d",&vetAux[i] );
  }

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if (vetAux[i] == vet[j]) {
        aux++;
      }
    }
  }

  switch (aux) {
    case 3:
    printf("terno\n");
    break;
    case 4:
    printf("quadra\n");
    break;
    case 5:
    printf("quina\n");
    break;
    case 6:
    printf("sena\n");
    break;
    default:
    printf("azar\n");
    break;
  }
  return 0;
}
