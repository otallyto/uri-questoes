#include <stdio.h>
int main() {
  long int a,b,fa=0,fb=0,i,j;
  scanf("%ld %ld",&a,&b);
  for (i = 0; i <a; i++) {
    fa=fa+a*i;
  }
  for ( j = 0; j < b; j++) {
    fb=fb+b*j;
  }
  printf("%d\n",fa+fb );


  return 0;
}
