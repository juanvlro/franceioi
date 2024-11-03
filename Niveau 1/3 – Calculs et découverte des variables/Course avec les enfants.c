#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int anneau = 1;
   
   repeat (10)
   {
      repeat (anneau)
      {
         droite();
      }
      
      ramasser();
      
      repeat (anneau)
      {
         gauche();
      }
      
      deposer();
      
      anneau++;
   }   
}
