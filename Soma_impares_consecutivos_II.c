#include <stdio.h>
int main() {
  int n,a,b,c,i,j,soma=0;
  scanf("%d",&n);
  for (i =1 ; i <= n; i++) {
    scanf("%d %d",&a,&b);
    if (a>b) {
      c=a;
      a=b;
      b=c;
    }
    for (j=a+1; j <b; j++) {
      if(j%2==1 || j%2==-1){
        soma=soma+j;
      }
    }
    printf("%d\n",soma);
    soma=0;
  }
  return 0;
}
