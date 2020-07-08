#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  unsigned long long int x,n;
  while (1) {
    scanf("%llu %llu",&x,&n);
    if (x==0 && n==0) {
      break;
    }
    printf("%llu\n",x*n );
  }
  return 0;
}
