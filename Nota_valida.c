#include <stdio.h>
int main() {
  float n1,n2,nA,nB,media,teste=0;
        scanf("%f",&n1);
        while (teste!=1) {
          if (n1>=0 && n1<=10) {teste=teste+1;nA=n1;}
          else {printf("nota invalida\n");scanf("%f",&n1);}
        }
        scanf("%f",&n2);
        while (teste!=2) {
          if(n2>=0 && n2 <=10){nB=n2;media=(nA+nB)/2;teste=teste+1;}
          else {printf("nota invalida\n");scanf("%f",&n2);}
        }
        printf("media = %.2f\n",media );
        return 0;
}
