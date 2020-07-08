#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char vilao[100];
  int test,i;
  scanf("%d",&test );
  setbuf(stdin,NULL);
  for (i = 0; i < test; i++) {
    gets(vilao);
    printf("Y\n");
  }

return 0;
}
