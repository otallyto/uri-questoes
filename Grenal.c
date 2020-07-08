#include <stdio.h>
int main() {
int gremio,inter,a=0,b=0,empate=0,sair=0,grenal=0,test=0;
  while (1) {
    scanf("%d %d",&gremio, &inter);
    if (gremio>inter) {
      a=a+1;
    }
    else if (gremio==inter) {
      empate=empate+1;
    }
    else{
      b=b+1;
    }
    grenal=grenal+1;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&sair);
    if (sair==2) {
      break;
    }
  }

  printf("%d grenais\n",grenal);
  printf("Inter:%d\n",a);
  printf("Gremio:%d\n",b);
  printf("Empates:%d\n",empate);
  if (a>b) {
    printf("Inter venceu mais\n");
  }
  else if (b>a) {
    printf("Gremio venceu mais\n");
  }
  return 0;
}
