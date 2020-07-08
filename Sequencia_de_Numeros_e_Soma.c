#include <stdio.h>
int main() {
  int a,b,c,i,soma=0;
  while (1) {
    scanf("%d %d",&a,&b);
    if (1) {
      if (a<=0 || b<=0) {
        break;
      }
    }
    if (a>b) {
      c=a;
      a=b;
      b=c;
    }
    for(i=a; i<=b; i++){
      printf("%d ",i);
      soma=soma+i;
    }
    printf("Sum=%d\n",soma);
    soma=0;
  }

 return 0;
}
