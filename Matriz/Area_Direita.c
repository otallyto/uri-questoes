#include <stdio.h>
#define tam 12
 int main(){
   double matriz[tam][tam]={0},soma=0.0;
   int i, j,aux=5,aux_2=7;
   char letra[2];
   scanf("%s",&letra);

   for (i = 0; i < tam; i++) {
     for (j = 0; j < tam; j++) {
       scanf("%lf",&matriz[i][j]);
     }
   }

   for (i = 7; i < 12; i++) {
     for (j = aux; j < aux_2; j++) {
       //matriz[j][i]=1;
       soma=soma+matriz[j][i];
     }
     aux--;aux_2++;
   }
   if (letra[0]=='S') {
     printf("%.1lf\n",soma);
   }
   else if (letra[0]=='M') {
     printf("%.1lf\n",soma/30.0);
   }
/*
   for (i = 0; i < tam; i++) {
     for (j = 0; j < tam; j++) {
       printf("%.1f\t",matriz[i][j]);
     }
     printf("\n");
   }
*/

 return 0;
}
