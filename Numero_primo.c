#include <stdio.h>
int main() {
  int n,a,i,j,cont=0;
  scanf("%d",&n);
  for (i = 1; i <=n; i++) {
    scanf("%d",&a);
    for (j = 1; j <=a; j++) {
      if (a%j==0) {
        cont=cont+1;
      }
    }
    if (cont==2) {
      printf("%d eh primo\n",a);
    }
    else {
      printf("%d nao eh primo\n",a);
    }
    }
  return 0;
}
