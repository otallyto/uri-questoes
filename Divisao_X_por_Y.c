#include <stdio.h>
int main() {
  int a,b,n,i;
  scanf("%d",&n );
  for (i = 0; i < n; i++) {
    scanf("%d %d",&a,&b);
    if (b==0) {printf("divisao impossivel\n");}
    else {
      printf("%.1f\n",(float)a/b);
    }
  }

  return 0;
}
