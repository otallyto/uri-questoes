#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char alfabeto[]= {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  char palavra[101];
  int num,i,j,k,l,n;
  int ent = 0,hash = 0;
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
      hash = 0;
      ent = 0;
    scanf("%d",&num);
    for (j = 0; j < num; j++) {
      scanf("%s",palavra);
      int tam = strlen(palavra);
      for (k = 0; k < tam; k++) {
        for (l = 0; l < 26; l++) {
          if (palavra[k]==alfabeto[l]) {
            hash+=l;
            hash+=ent;
            hash+=k;
          }
        }
      }
      ent++;
    }
    printf("%d\n",hash);
  }

  return 0;
}
