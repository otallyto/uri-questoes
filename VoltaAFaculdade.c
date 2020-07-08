#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a,b,result;
  while (scanf("%d %d",&a,&b) != EOF) {
    result = (2*a)*b;
    printf("%d\n",result);
  }
  return 0;
}
