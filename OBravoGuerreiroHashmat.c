#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  long long int num1,num2;
  while (scanf("%lld %lld",&num1,&num2 ) != EOF) {
    if (num1>num2) {
      printf("%lld\n",num1-num2);
    }
    else{
      printf("%lld\n",num2-num1);
    }
  }
  return 0;
}
