#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int nbPaires;
   scanf("%d", &nbPaires);
   
   repeat (nbPaires)
   {
      int xMin1, xMax1;
      scanf("%d %d", &xMin1, &xMax1);
      
      int yMin1, yMax1;
      scanf("%d %d", &yMin1, &yMax1);
      
      int xMin2, xMax2;
      scanf("%d %d", &xMin2, &xMax2);
      
      int yMin2, yMax2;
      scanf("%d %d", &yMin2, &yMax2);
      
      if ((xMin1 >= xMax2 || xMax1 <= xMin2) || (yMin1 >= yMax2 || yMax1 <= yMin2))
      {
         printf("NON\n");
      }
      else
      {
         printf("OUI\n");
      }
   }
}
