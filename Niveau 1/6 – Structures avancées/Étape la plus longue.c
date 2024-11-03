#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbJours;
   scanf("%d", &nbJours);
   
   int distanceMax = 0;
   
   repeat (nbJours)
   {
      int distance;
      scanf("%d", &distance);
      
      if (distance > distanceMax)
      {
         distanceMax = distance;
      }
   }
   
   printf("%d\n", distanceMax);
}
