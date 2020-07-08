#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int test,dias;
  int i,num,cont=0;
  scanf("%d %d",&test,&dias);
  while (1) {
    scanf("%d",&num);
    switch (num) {
      case 1:
      printf("Rolien\n");
      break;
      case 2:
      printf("Naej\n");
      break;
      case 3:
      printf("Elehcim\n");
      break;
      case 4:
      printf("Odranoel\n");
      break;
    }
    cont++;
    if (cont==dias) {
      test--;
      if(test==0){
        break;
      }
      scanf("%d",&dias);
      cont = 0;
    }

  }
  return 0;
}
