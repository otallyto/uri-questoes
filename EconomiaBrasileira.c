#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int num,test,sim = 0;
  int i;
  scanf("%d",&num);
  for (i = 0; i < num; i++) {
    scanf("%d",&test);
    if (test==0) {
      sim++;
    }
  }
  test = num/2;
  if (sim>test) {
    printf("Y\n");
  }
  else{
    printf("N\n");
  }

  return 0;
}
