#include <stdio.h>
int main() {
  int a,b,i,soma=0;
  scanf("%d %d",&a,&b);
  if(a>b){
    for (i = b; i <= a; i++) {
      if (i%13==0) continue;{
        soma=soma+i;
      }
    }

  }
  else if (a<b){
    for (i = a; i <= b; i++) {
      if (i%13==0) continue;{
        soma=soma+i;
      }
    }

  }
  printf("%d\n",soma );
  return 0;
}
