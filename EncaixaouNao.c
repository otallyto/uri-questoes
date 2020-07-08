#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a,b,restoA,restoB;
  scanf("%d %d",&a,&b);
  restoA = a%10;
  restoB = b%10;
  printf("Resto (a) = %d Resto (b) = %d\n",restoA,restoB);

  return 0;
}
