#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int tam_tweet;
  char tweet [500];

  scanf("%[^\n]", tweet);

      tam_tweet = strlen(tweet);
      if (tam_tweet <= 140) {
        printf("TWEET\n");
      }
      else{
        printf("MUTE\n");
      }


  return 0;
}
