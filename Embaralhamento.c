#include <stdio.h>
#include <string.h>

int main() {
char nome[20];
double fat, tam;
while (1) {
  scanf("%s",nome);
  if (nome[0]=='0') {break;}
  tam = strlen(nome);
  for(fat = 1; tam > 1; tam = tam - 1)
  fat = fat * tam;
  printf("%.0f\n", fat);
}
  return 0;
}
