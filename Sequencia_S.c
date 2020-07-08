//Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
//S = 1 + 1/2 + 1/3 + … + 1/100
#include <stdio.h>
int main() {
  double s=0,t,i;
  for (i = 1; i <= 100; i++) {
    t=1/i;
    s=s+t;
  }
  printf("%.2lf\n",s);
  return 0;
}
