#include <stdio.h>
#include <iostream>

int main(){

    int n, danca;
    char texto[50];

    while(std::cin.getline(texto,50)){
        danca = 0;
        for(int j = 0; j < 50; j++){
            if(texto[j] == '\0') break;
            if(danca == 0){
                     if(texto[j] >= 97){
                                  printf("%c",texto[j]-32);
                                  danca = 1;
                     }
                     else if(texto[j] == 32){
                           printf("%c",texto[j]);
                     }
                     else{
                           printf("%c",texto[j]);
                           danca = 1;
                     }
            }else{
                  if(texto[j] >= 97){
                               printf("%c",texto[j]);
                               danca = 0;
                  }
                  else if(texto[j] == 32){
                        printf("%c",texto[j]);
                  }
                  else{
                        printf("%c",texto[j] + 32);
                        danca = 0;
                  }
            }
         }
         printf("\n");
    }

    return 0;
}

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char palavra[60];
  int i;
  while (scanf("%[^\n]s",palavra)!=EOF) {
    setbuf(stdin, NULL) ;
    int tam = strlen(palavra);
    for (i = 0; i < tam; i++) {
      if (i%2 == 0 && palavra[i]!= ' ' && palavra[i]>=97 && palavra[i]<=122) {
        palavra[i] = palavra[i] - 32;
      }
    }
    printf("%s\n",palavra );
  }
  return 0;
}
*/
