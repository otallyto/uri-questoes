#include <stdio.h>
int main() {
  int dia,ano =0,mes=0;
  scanf("%d",&dia);
  while (dia>=365) {ano++;dia=dia-365;}
  while (dia>=30) {mes++;dia=dia-30;}
  printf("%d ano(s)\n",ano);
  printf("%d mes(es)\n",mes );
  printf("%d dia(s)\n",dia);


  return 0;
}
