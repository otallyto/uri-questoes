#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int loop,muralha,tam,aux = 0;
  char titan[101],titanAux[101];
  scanf("%d",&loop);
  scanf("%d",&muralha);
  for (int i = 0; i < loop; i++) {
    setbuf(stdin, NULL);
    gets(titan);
    scanf("%d", &tam);
    if (tam>muralha && tam>aux) {
      strcpy(titanAux,titan);
      aux = tam;
    }
  }
  printf("%s\n",titanAux);

  return 0;
}2
