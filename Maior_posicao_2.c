/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    printf("intervalo da rand: [0,%d]\n", RAND_MAX);

    for(i=1 ; i <= 10 ; i++)
        printf("Numero %d: %d\n",i, rand());

}
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int vetor [100];
	int random,i,j,p=0,x;
	srand ((unsigned)time(NULL));

    for (i = 1; i < 101; i++) {
    	random = rand ();
			vetor[i]=random;
			//printf("%d\n",vetor[i]);
    }
		i = 1;
    x = vetor[0];

		while (i < 100) /*Este laco compara cada elemento do vetor*/
		{
				if (vetor[i] > x)
				{
					 x = vetor[i];
					 p=i+1;
				}
				i++;
		}
		printf("%d\n%d",x,p);

}
