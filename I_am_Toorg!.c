#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

  char pergunta[100];
  int test,i;
  scanf("%d",&test );
  setbuf(stdin,NULL);
  for (i = 0; i < test; i++) {
    gets(pergunta);
    printf("I am Toorg!\n");
  }


return 0;
}
