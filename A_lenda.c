#include <stdio.h>
int main() {
  int i, casos, pessoas, saltos;
  int circulo[1005] = {0};
  scanf("%d",&casos );
  for (i = 0; i < casos; i++) {
    scanf("%d %d",&pessoas, &saltos);

      for (i = 0; i < pessoas; i += saltos) {
        circulo[i] = 1;
      }
    for (i = 0; i < pessoas; i++) {
      printf("%d ",circulo[i] );
    }
  }

  return 0;
}
