#include <stdio.h>
int main() {
  int i,cont=0;
  int n;
  for (i = 1; i <=5; i++) {
    scanf("%d",&n);
    if (n%2==0) {
      cont=cont+1;


    }


  }
  printf("%d valores pares\n",cont );



  return 0;
}
