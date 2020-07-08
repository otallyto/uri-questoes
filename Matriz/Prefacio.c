#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b;
  int valor,resto;
  scanf("%d %d",&a,&b);
  valor = a/b;
  resto = a%b;
  printf("%d %d\n",valor,resto );
  return 0;
}
