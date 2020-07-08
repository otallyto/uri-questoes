#include <stdio.h>

int main()
{
  int n=7, k, d=10;
  int num, i;
  int resultado, pot;
  scanf("%d",&num);
  for (i = 0; i < num; i++) {
    //scanf("%d", &n);
    scanf("%d", &k);
    //scanf("%d", &d);

    pot = n % d;
    resultado = 1;

    for ( ; k > 0; k /= 2) {
      if (k % 2 == 1)  /* O bit menos significativo e 1 */
        resultado = (resultado * pot) % d;

      pot = (pot * pot) % d;
    }

    printf("%d\n", resultado);
  }


  return 0;
}
