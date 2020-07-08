#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char cod[5];
  int i,n,a,b;
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    scanf("%s",cod);
    if(cod[0] == cod[2]){
      a = cod[0] - 48;
      b = cod[2] - 48;
      printf("%d\n",a*b);
    }
    else if (cod[1]>=65 && cod[1]<=90) {
      a = cod[0] - 48;
      b = cod[2] - 48;
      printf("%d\n",b-a);
    }
    else if (cod[1]>=97 && cod[1]<=122) {
      a = cod[0] - 48;
      b = cod[2] - 48;
      printf("%d\n",a+b);
    }

  }
  return 0;
}
