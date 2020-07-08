#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int dia_1, dia_2;
  int dias = 0, horas = 0, minutos = 0, segundos = 0;
  int dias_2 = 0, horas_2 = 0, minutos_2 = 0, segundos_2 = 0;
  int soma_h=0, soma_min=0, soma_s=0;
  printf("Dia ");
  scanf("%d",&dia_1 );
  scanf("%d %d %d", &horas, &minutos, &segundos );
  printf("Dia ");
  scanf("%d",&dia_2 );
  scanf("%d %d %d", &horas_2, &minutos_2, &segundos_2 );
  soma_h = (horas + horas_2) * 3600;
  soma_min = (minutos_2 + minutos_2) * 60;
  soma_s = (segundos + segundos_2);
  printf("Horas: %.2f\n",(float)soma_h / 3600 );
  printf("Minutos: %.2f\n",(float)soma_min/60 );
  printf("Segundos: %.2f\n",(float)soma_s );


  return 0;
}
