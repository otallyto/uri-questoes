#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num;

  while (scanf("%d",&num)!=EOF) {
    printf("%d\n",num=num-1);
  }
  return 0;
}
