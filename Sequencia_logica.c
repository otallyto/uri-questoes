#include <stdio.h>
int main() {
  int a,b,i,c=0,d=1,e=2;
  scanf("%d %d",&a,&b );
  for (i = 1; i <= b; i++) {
    printf("%d %d %d\n",c+i,d+i,e+i);
  }
  return 0;
}
