#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int num,n,i;
  int cont =0, aux = 0, tent = 0,flag = 0;
  while (1) {
    scanf("%d",&n);
    if (n==0) {
      break;
    }
    flag = 0;
    tent = 0;
    while (flag!=1) {
      aux = 0;
      cont = 0;
      for (i = 0; i < n; i++) {
        scanf("%d",&num);
        if (num > aux) {
          aux = num;
          cont++;
        }
        if (cont == n) {
          flag = 1;
        }
      }
      tent++;
    }
    printf("%d\n",tent);
  }
  return 0;
}
