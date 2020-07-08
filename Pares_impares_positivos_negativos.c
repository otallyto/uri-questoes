#include <stdio.h>
int main() {
  int i,pares=0,impares=0,positivos=0,negativos=0;
  int n;
  for (i = 1; i <=5; i++) {
    scanf("%d",&n);
    if (n%2==0)
    pares=pares+1;
    else
    impares=impares+1;
    if (n>0)
    positivos=positivos+1;
    else if (n!=0)
    negativos=negativos+1;


  }
  printf("%d valor(es) par(es)\n",pares);
  printf("%d valor(es) impar(es)\n",impares);
  printf("%d valor(es) positivo(s)\n",positivos);
  printf("%d valor(es) negativo(s)\n",negativos);



  return 0;
}
