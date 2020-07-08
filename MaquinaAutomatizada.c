#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int i,flag=0;
  int vet[6],vet2[6];
  for (i = 0; i < 5; i++) {
    scanf("%d",&vet[i]);
  }
  for (i = 0; i < 5; i++) {
    scanf("%d",&vet2[i]);
  }
  for (i = 0; i < 5; i++) {
    if (vet[i]!=vet2[i]) {
      flag++;
    }
  }

  if (flag==5) {
    printf("Y\n");
  }
  else{
    printf("N\n");
  }
  return 0;
}
