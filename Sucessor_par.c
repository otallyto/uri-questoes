#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  long long int n;
  scanf("%lld",&n );
  if (n%2==0) {
    n++;
  }
  while (1) {
    if (n%2==0) {
      printf("%d\n",n );
      break;
    }
    else{
      n++;
    }
  }

  return 0;
}
