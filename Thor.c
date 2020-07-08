#include <stdio.h>
int main()
{
    int a,b,c;
    char nome[100];
    scanf("%d", &a);
    for(b=1; b<=a; b++)
    {
        scanf("%s",nome);
        scanf("%d", &c);
        if(nome[0]=='T' && nome[1]=='h' && nome[2]=='o' && nome[3]=='r')
            printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
