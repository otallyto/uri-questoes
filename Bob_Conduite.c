#include <stdio.h>
 int main(){
   int n,i,c_res;
   long int c_1, c_2;
   scanf("%d",&n);
   for (i = 0; i <n; i++) {
     scanf("%ld %ld",&c_1,&c_2);
     c_res=c_1+c_2;
     printf("%ld\n", c_res);
   }




 return 0;
}
