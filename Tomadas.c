#include <stdio.h>
 int main(){
   int i,s,tomadas=0;
   for (i = 0; i < 4; i++) {
     scanf("%d",&s);
     tomadas+=s;
   }
printf("%d\n",tomadas-3);
 return 0;
}
