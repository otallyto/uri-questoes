#include <stdio.h>
int main() {
  int n,i,a,in=0,out=0;
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    scanf("%d",&a );
    if (a>=10 && a<=20) {
      in=in+1;
    }
    else{
      out=out+1;

    }
  }
  printf("%d in\n",in);
  printf("%d out\n",out);


  return 0;
}
