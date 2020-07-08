#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char palavra [125];
  int n;
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
    scanf("%s",palavra);
    int tam = strlen(palavra);
    if(tam == 8){
      if ((palavra[0] >= 65 && palavra[0] <= 90) && (palavra[1] >= 65 && palavra[1] <= 90) && (palavra[2] >= 65 && palavra[2] <= 90)
      && (palavra[4] >= 48 && palavra[4] <= 57) && (palavra[5] >= 48 && palavra[5] <= 57) && (palavra[6] >= 48 && palavra[6] <= 57)
      && (palavra[5] >= 48 && palavra[5] <= 57) && (palavra[3] == 45))  {
        if (palavra[tam-1] == '1' || palavra[tam-1] == '2' ) {
          printf("MONDAY\n");
        }
        else if (palavra[tam-1] == '3' || palavra[tam-1] == '4' ) {
          printf("TUESDAY\n");
        }
        else if (palavra[tam-1] == '5' || palavra[tam-1] == '6' ) {
          printf("WEDNESDAY\n");
        }
        else if (palavra[tam-1] == '7' || palavra[tam-1] == '8' ) {
          printf("THURSDAY\n");
        }
        else if (palavra[tam-1] == '9' || palavra[tam-1] == '0' ) {
          printf("FRIDAY\n");
        }
        else{
          printf("FAILURE\n");
      }
      }
      else{
        printf("FAILURE\n");
      }
    }
    else{
      printf("FAILURE\n");
    }
  }
  return 0;
}
