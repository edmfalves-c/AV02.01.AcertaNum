#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() 
{
  srand(time(NULL));
  int x, chute, tentativas =1;

  x = (rand() % 100) + 1;
  printf("tente adivinhar! digite um valor de 1 a 100!");
    scanf("%d", &chute);

  while ((chute != x) && (tentativas < 5))
  {
    if(chute < x)
    {
      printf("um pouco mais\n.");
    }
    else
    {
      printf("um pouco menos.\n");
    }

    printf("tente adivinhar! digite um valor de 1 a 100!");
    scanf("%d", &chute);
    tentativas++;
  }
  if (tentativas < 5)
  {
    printf("parabéns, o número sorteado era %d",x);
  }
  else
  {
    printf("esgotaram-se as tentativas!! o número sorteado era %d",x);
  }
  
  return 0;
}