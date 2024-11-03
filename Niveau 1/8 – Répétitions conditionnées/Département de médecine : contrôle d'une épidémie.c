#include <stdio.h>

int main()
{
   int population;
   scanf("%d", &population);
   
   int jour = 1;
   int malades = 1;
   
   while (malades < population)
   {
      malades += malades * 2;
      jour++;
   }
   
   printf("%d\n", jour);
}
