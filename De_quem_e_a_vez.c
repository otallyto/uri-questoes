#include <stdio.h>
#include <string.h>
int main() {
  int i, n, num1, num2, total = 0;
  char nome1[150], nome2[150], opcao1[20], opcao2[20];
  scanf("%d",&n );
  for (i = 0; i < n; i++) {
    scanf("%s %s %s %s", nome1, opcao1, nome2, opcao2);
    scanf("%d %d", &num1, &num2);
    total = num1 + num2;
    if(total % 2 == 0){
      if(strcmp(opcao1,"PAR") == 0){printf("%s\n", nome1);}
      if(strcmp(opcao2,"PAR") == 0){printf("%s\n", nome2);}
    }
    else{
      if(strcmp(opcao1,"IMPAR") == 0){printf("%s\n", nome1);}
      if(strcmp(opcao2,"IMPAR") == 0){printf("%s\n", nome2);}
    }
  }

  return 0;
}
