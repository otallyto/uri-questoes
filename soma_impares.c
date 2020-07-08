#include <stdio.h>
int main() {
  int A,B,i=0,aux,soma=0;
  scanf("%d %d",&A,&B );
  if (A>B) {
    aux=A;
    A=B;
    B=aux;
    while (i>=A && i<=B) {
      i++;
      soma=soma+i;
    }
    printf("SOMA: %d\n",soma);
  }


  return 0;
}
