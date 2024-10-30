#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbCubes = 0;
   int etage = 1;
   
   repeat (9)
   {
      nbCubes += etage * etage * etage;
      etage += 2;
   }
   
   printf("%d\n", nbCubes);
}
