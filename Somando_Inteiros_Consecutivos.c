#include <stdio.h>
int main() {
  int a,b,n,i,test=0,soma=0;
  scanf("%d %d",&a,&n);
if (n<=0) {
  while (test!=1) {
    if (n<=0) {
      scanf("%d",&n);
    }
    else {
      test=test+1;
    }
  }
}
  b=a+n;
  for(i=a; i<b; i++){
    soma=soma+i;
  }
  printf("%d\n",soma);
 return 0;
}
