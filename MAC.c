#include <stdio.h>
int main(int argc, char const *argv[]) {
  int cod, casos,quant,i;
  float valor = 0;
  scanf("%d",&casos );
  for (i = 0; i < casos; i++) {
    scanf("%d %d",&cod,&quant);
    switch (cod) {
      case 1001: valor = valor + quant * 1.50; break;
      case 1002: valor = valor + quant * 2.50; break;
      case 1003: valor = valor + quant * 3.50; break;
      case 1004: valor = valor + quant * 4.50; break;
      case 1005: valor = valor + quant * 5.50; break;
    }
  }
  printf("%.2f\n",valor );
  return 0;
}
