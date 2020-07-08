#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b,x,y,loop;
  while (1) {
    x = y = 0;
    scanf("%d",&loop );
    if (loop == 0) {
      break;
    }
    for (int i = 0; i < loop; i++) {
      scanf("%d %d",&a,&b);
      if (a>b){
        x++;
      }else if(a<b){
        y++;
      }
    }
    printf("%d %d\n",x,y);
  }


  return 0;
}
