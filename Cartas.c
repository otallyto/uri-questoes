#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int vet[6];
  int c=0,d=0;
  int auxC=0,auxD=14;
  for (int i = 0 ; i<5 ; i++){
    scanf("%d",&vet[i] );
  }

  for (int i = 0 ; i<5 ; i++){
    if (vet[i]>auxC) {
      c++;
      auxC = vet[i];
    }
    if (vet[i]<auxD) {
      d++;
      auxD = vet[i];
    }
  }

  if (c==5) {
    printf("C\n");
  }
  else if(d==5){
    printf("D\n");
  }
  else{
    printf("N\n");
  }


  return 0;
}
