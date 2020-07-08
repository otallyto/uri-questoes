#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int m,n;
  while (1) {
    scanf("%d %d",&m,&n );
    if (m==0 && n==0) {
      break;
    }
    printf("%d\n",m+n);
  }
  return 0;
}
