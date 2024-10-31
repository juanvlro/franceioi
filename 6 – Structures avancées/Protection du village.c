#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbMaisons;
   scanf("%d", &nbMaisons);
   
   int xMin = 1000000;
   int xMax = 0;
   
   int yMin = 1000000;
   int yMax = 0;
   
   repeat (nbMaisons)
   {
      int x;
      scanf("%d", &x);
      
      int y;
      scanf("%d", &y);
      
      if (x < xMin)
      {
         xMin = x;
      }
      
      if (x > xMax)
      {
         xMax = x;
      }
      
      if (y < yMin)
      {
         yMin = y;
      }
      
      if (y > yMax)
      {
         yMax = y;
      }
   }
   
   printf("%d\n", 2 * (xMax - xMin) + 2 * (yMax - yMin));
}
