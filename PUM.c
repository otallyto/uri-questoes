#include <stdio.h>
int main() {
  int n,i,a=1,b=2,c=1,d=2,e=3;
  scanf("%d",&n);
  for (i = 1; i <n ; i++) {
    if (i==1) {
      a=a+i;
      b=b+i;
      printf("%d %d %d PUM\n",i,a,b);
    }
      c=c+4;
      d=d+4;
      e=e+4;
    printf("%d %d %d PUM\n",c,d,e);
  }

  return 0;
}
