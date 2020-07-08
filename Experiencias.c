#include <stdio.h>
#include <string.h>
int main() {
  int teste,i;
  float num, total, sapo=0,rato=0,coelho=0;
  float p_coelho=0,p_rato=0,p_sapo=0;
  char animal [10];
  scanf("%d",&teste);
  for (i = 0; i < teste; i++) {
    scanf("%f %s",&num,&animal);
    if (strcmp(animal,"S")==0) {
      sapo=sapo+num;
    }
    else if (strcmp(animal,"R")==0) {
      rato=rato+num;
    }
    else if (strcmp(animal,"C")==0) {
      coelho=coelho+num;
    }

  }
  total=(coelho+rato+sapo);
  printf("Total: %.0f cobaias\n",total);
  p_coelho = (coelho * 100)/total;
  p_rato = (rato*100)/total;
  p_sapo = (sapo*100)/total;
  printf("Total de coelhos: %.0f\n",coelho);
  printf("Total de ratos: %.0f\n",rato);
  printf("Total de sapos: %.0f\n",sapo);
  printf("Percentual de coelhos: %.2f %%\n",p_coelho);
  printf("Percentual de ratos: %.2f %%\n",p_rato);
  printf("Percentual de sapos: %.2f %%\n",p_sapo);




  return 0;
}
