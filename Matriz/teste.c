
#include <stdio.h>
#define TAM 70

int main() {
  long long int mat[TAM][TAM];
  int l, c, n;

  while (scanf("%lld", &n)!=EOF) {
    for (l=0; l<n; l++){
      for (c=0; c<n; c++){
        mat[l][c]=3;
        if (l==c) {
          mat[l][c]=1;
        }
        if (l+c==n-1) {
          mat[l][c]=2;
        }
        printf("%d", mat[l][c]);
      }
      printf("\n");
    }
  }
  return 0;
}
