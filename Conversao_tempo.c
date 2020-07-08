#include <stdio.h>
int main() {
  int s,m =0,h=0;
  scanf("%d",&s);
  while (s>=3600) {h++;s=s-3600;}
  while (s>=60) {m++;s=s-60;}
  printf("%d:%d:%d\n",h,m,s);


  return 0;
}
