#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbBonbons = 0;
   int tir = 0;
   
   repeat (50)
   {
      nbBonbons += (++tir);
      printf("%d\n", nbBonbons);
   }   
}
