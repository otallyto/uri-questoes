#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  int num,i;
  char nome[1001],auxN[1001];
  int poder,deus,morreu;
  int auxP=0,auxD=0,auxM=0;
  int tam1,tam2;
  scanf("%d",&num );
  for (i = 0; i < num; i++) {
    scanf("%s %d %d %d",nome,&poder,&deus,&morreu);
    if (poder>auxP) {
      strcpy(auxN,nome);
      auxP = poder;
      auxD = deus;
      auxM = morreu;
    }
    else if(poder==auxP){
      if(deus==auxD){
        if (morreu==auxM) {
          if (strcmp(nome,auxN)<0) {
            strcpy(auxN,nome);
            auxP = poder;
            auxD = deus;
            auxM = morreu;
          }
        }
        else if (morreu<auxM) {
          strcpy(auxN,nome);
          auxP = poder;
          auxD = deus;
          auxM = morreu;
        }
      }
      else if(deus>auxD){
        strcpy(auxN,nome);
        auxP = poder;
        auxD = deus;
        auxM = morreu;
      }
    }
  }

  printf("%s\n",auxN );
  return 0;
}

/*
10
hulk 1 1 0
mago 1 2 0
pi 1 0 3
cao 1 1 1
pica 0 1 0
vrau 1 4 1
pe 1 3 1
lucios 5 10 5
nerd 10 10 1
nill 10 10 0
*/
