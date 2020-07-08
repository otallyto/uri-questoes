#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int i,num,codigo,aux = 0;
  float nota = 0,notaAux = 0;
  scanf("%d",&num);
  for (i = 0; i < num; i++) {
    scanf("%d %f",&codigo,&nota);
    if (nota>=8) {
      aux = codigo;
      notaAux = nota;
      if (nota>notaAux) {
        aux = codigo;
        notaAux = nota;
      }
    }
  }
  if (notaAux>=8) {
    printf("%d\n",aux);
  }
  else{
    printf("Minimum note not reached");
  }

  return 0;
}
