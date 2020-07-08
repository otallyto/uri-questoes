#include <stdio.h>
int main() {
  int i,cont=0;
  float n;
  for (i = 1; i <=6; i++) {
    scanf("%f",&n);
    if (n>0) {
      cont=cont+1;

    }


  }
  printf("%d valores positivos\n",cont );

  return 0;
}
