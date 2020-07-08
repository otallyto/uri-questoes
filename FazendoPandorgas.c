#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int num, n,m,i;
  scanf("%d",&num);
  for (i = 0; i < num; i++) {
    scanf("%d %d",&m,&n);
    printf("%d cm2\n",(m*n)/2);
  }
  return 0;
}
