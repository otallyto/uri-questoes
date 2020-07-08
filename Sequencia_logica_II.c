#include <stdio.h>
int main() {
  int n,m,i,j,k=0;
  scanf("%d %d",&n,&m);
    for(i = 1; i <= m; i++){
      k++;
      if (k==n) {
        printf("%d",i);
      }
      else {
        printf("%d ",i);
      }
      if (k==n) {
        k=0;
        printf("\n");
      }

  }

  return 0;
}
