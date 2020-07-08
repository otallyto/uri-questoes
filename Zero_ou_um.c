#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A,B,C;
  while (scanf("%d %d %d",&A,&B,&C ) != EOF) {
    if (A == B && B == C) {
      printf("*\n");
    }
    else if(A == B && B != C){
      printf("C\n");
    }
    else if(A == C && C != B){
      printf("B\n");
    }
    else if(B == C && C != A){
      printf("A\n");
    }
  }
  return 0;
}
