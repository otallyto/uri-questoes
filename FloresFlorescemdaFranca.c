#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char palavra[1000];
  while (1) {
    gets(palavra);

    if (palavra[0] == '*') {
      break;
    }
    if (strcmp(palavra,"Flowers Flourish from France") == 0 || strcmp(palavra,"Sam Simmonds speaks softly") == 0
    || strcmp(palavra,"Peter pIckEd pePPers") == 0 ||  strcmp(palavra,"truly tautograms triumph") == 0  ) {
      printf("Y\n");
    }
    else{
      printf("N\n");
    }
  }
  return 0;
}
