
#include <stdio.h>
int fatorial (int n){
  int fat;
  for(fat = 1; n > 1; n = n - 1){
      fat = fat * n;
  }
  return fat;
}
int main()
{
long long int fat, a,b,vA,vB;
while (scanf("%lld %lld", &a,&b) != EOF) {
  vA = vB = 0;
  vA = fatorial (a);
  vB = fatorial (b);
  printf("%lld\n",vA+vB);
}
return 0;
}
