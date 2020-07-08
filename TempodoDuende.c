#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n,a,b;
  scanf("%d",&n);
  scanf("%d %d",&a,&b);
  if (a+b>n) {
    printf("Deixa para amanha!\n");
  }
  else if(a+b<=n){
    printf("Farei hoje!\n");
  }
  return 0;
}
