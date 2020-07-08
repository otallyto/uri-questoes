#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int num,m=0,j=0;
  int i, aux;
  while (1) {
    scanf("%d",&num);
    if (num ==0) {
      break;
    }
    m = j = 0;
    for (i = 0; i < num; i++) {
      scanf("%d",&aux);
      if (aux==0) {
        m++;
      }
      else{
        j++;
      }
    }
    printf("Mary won %d times and John won %d times\n",m,j );
  }
  return 0;
}
