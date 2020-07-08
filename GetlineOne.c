#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  double aux = 0, num = 0;
  int cont = 0;
  char nome[50];
  while (scanf("%s",nome) != EOF) {
    scanf("%lf",&num);
      aux += num;
      cont++;
  }
  printf("%.1lf\n",aux/cont);
  return 0;
}
