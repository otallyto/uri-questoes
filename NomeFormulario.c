#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char nome[501];
  scanf("%[^\n]s",nome );
  int tam = strlen(nome);
  if (tam<=80) {
      printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}
