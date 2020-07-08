#include "stdio.h"
int main() {
  int idade,cont=0,soma=0;
while (1) {
  scanf("%d",&idade );
  if (idade<0) {
    break;
  }
  soma=soma+idade;
  cont++;

}
printf("%.2f\n",(float)soma/cont );

 return 0;
}
