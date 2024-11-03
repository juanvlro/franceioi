#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int xMin;
   scanf("%d", &xMin);
   
   int xMax;
   scanf("%d", &xMax);
   
   int yMin;
   scanf("%d", &yMin);
   
   int yMax;
   scanf("%d", &yMax);
   
   int nbMaisons;
   scanf("%d", &nbMaisons);
   
   int nbSuspects = 0;
   
   repeat (nbMaisons)
   {
      int x;
      scanf("%d", &x);
      
      int y;
      scanf("%d", &y);
      
      if ((x >= xMin && x <= xMax) && (y >= yMin && y <= yMax))
      {
         nbSuspects++;
      }
   }
   
   printf("%d", nbSuspects); 
}
