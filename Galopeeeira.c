#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char letras [10100];
  int n,i,j;
  int tam;
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    scanf("%s", letras);
    tam=strlen(letras);
    printf("%.2f\n",(float)tam/100);
  }

  return 0;
}
