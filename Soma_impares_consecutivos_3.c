#include <stdio.h>
int main() {
  int n,a,b,c,j,i;
  scanf("%d",&n);
  for (i = 1; i <=n; i++) {
    scanf("%d %d",&a,&b);
    if (a%2==1) {
      c=0;
      for (j = 1; j <= b; j++) {
        c=c+a;
        a=a+2;
      }
      printf("%d\n",c);
    }
    else {
      a++;
      c=0;
      for (j = 1; j <= b; j++) {
        c=c+a;
        a=a+2;
      }
      printf("%d\n",c );


    }

  }
    return 0;
  }
