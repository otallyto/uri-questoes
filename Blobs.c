#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d",&n);
  float a,aux,resto;
  int cont;
  for (int i = 0; i <n; i++) {
    cont = 0;
    scanf("%f",&a);
    while (a>1) {
      cont++;
      resto = a/2.0;
      a = resto;
    }
    printf("%d dias\n",cont);
  }
  return 0;
}
