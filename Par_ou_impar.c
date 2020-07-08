/*Leia um valor inteiro N. Este valor será a quantidade de valores que serão
lidos em seguida. Para cada valor lido, mostre uma mensagem em inglês dizendo
se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo
(NEGATIVE). No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL),
pois por definição zero é par, seu programa deverá imprimir apenas NULL.
*/

#include <stdio.h>
int main() {
  int n,vl,i;
  scanf("%d",&n);
  for (i = 1; i <=n; i++) {
    scanf("%d",&vl);
    if (vl==0) {printf("NULL\n");}
    else {
      if (vl%2==0 && vl>0) {printf("EVEN POSITIVE\n");}
      else if (vl%2==0 && vl<0) {printf("EVEN NEGATIVE\n");}
      else if (vl%2==1 && vl>0) {printf("ODD POSITIVE\n");}
      else if (vl%2==-1 && vl<0) {printf("ODD NEGATIVE\n");}

    }

  }

  return 0;
}
