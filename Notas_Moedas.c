#include <stdio.h>

int main() {
  float money;
  float cem = 0, cinq = 0,vinte = 0,dez = 0,cinco = 0,dois = 0,um = 0;
  float _50cent=0,_25cent=0,_10cent=0,_5cent=0,_1cent=0;
  scanf("%f", &money);

  while (money >= 100.00){cem++; money = money - 100.00;}
  while (money >= 50.00){cinq++; money = money - 50.00;}
  while (money >= 20.00){vinte++;money = money - 20.00;}
  while (money >= 10.00){dez++; money = money - 10.00;}
  while (money >= 5.00){cinco++; money = money - 5.00;}
  while (money >= 2.00){dois++; money = money - 2.00;}
  while (money == 1.00 ){um++; money = money - 1.00;}
  //CENTAVOS
  while (money < 1.00 && money >= 0.050){_50cent++; money = money - 0.050;}
  while (money < 0.50 && money >= 0.025){_25cent++;money = money - 0.025;}
  while (money < 0.25 && money >= 0.010){_10cent++; money = money - 0.010;}
  while (money < 0.10 && money >= 0.05){_5cent++; money = money - 0.05;}
  while (money <0.5 && money >= 0.01){_1cent++; money = money - 0.01;}



  printf("NOTAS:\n");
  printf("%.0f nota(s) de R$ 100.00\n",cem);
  printf("%.0f nota(s) de R$ 50.00\n",cinq);
  printf("%.0f nota(s) de R$ 20.00\n",vinte);
  printf("%.0f nota(s) de R$ 10.00\n",dez);
  printf("%.0f nota(s) de R$ 5.00\n",cinco);
  printf("%.0f nota(s) de R$ 2.00\n",dois);
  printf("MOEDAS:\n");
  printf("%.0f moeda(s) de R$ 1.00\n",um);
  printf("%.0f moeda(s) de R$ 0.50\n",_50cent);
  printf("%.0f moeda(s) de R$ 0.25\n",_25cent);
  printf("%.0f moeda(s) de R$ 0.10\n",_10cent);
  printf("%.0f moeda(s) de R$ 0.05\n",_5cent);
  printf("%.0f moeda(s) de R$ 0.01\n",_1cent);

  return 0;
}
