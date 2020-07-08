#include <stdio.h>
#include <string.h>
int main() {
  int num, test, i, soma = 0;
  char opcao[15];
  scanf("%d",&num);
  scanf("%d",&test);
  soma = num;
  for (i = 0; i < test; i++) {
    scanf("%s",opcao);
    if (strcmp(opcao,"fechou") == 0) {
      soma = soma - 1;
      soma = soma + 2;
    }
    else{
      soma = soma - 1;
    }
  }
  printf("%d\n",soma);

  return 0;
}
