#include <stdio.h>
int main() {
  int a,b,c=1,soma=0,i,j;
  scanf("%d",&a );
  for (i = 1; i <=a; i++) {
    scanf("%d",&b);
    while (c<b) {
      if (b%c==0) {soma=soma+c; c=c+1;}
      else {c=c+1;}

    }
    if (soma==c) {printf("%d eh perfeito\n",b);}

    else {printf("%d nao eh perfeito\n",b);}
      }


  return 0;
}
