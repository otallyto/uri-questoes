#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  int i,j,tam;
  long long int test;
  char num[100] = {0};
  char invertido[100] = {0};
  scanf("%lld",&test );
  for (i = 0; i < test; i++) {
    scanf("%s",num );
    tam = strlen (num);
    for (i = tam - 1, j = 0; i == 0, j < tam; i--, j++) {
      invertido[j] = num[i];
    }
    printf("%s\n",invertido );
  }
  return 0;
}
