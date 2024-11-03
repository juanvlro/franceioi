#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbVariations;
   scanf("%d", &nbVariations);
   
   int altitudeMontee = 0;
   int altitudeDescendue = 0;
   
   repeat (nbVariations)
   {
      int variation;
      scanf("%d", &variation);
      
      if (variation > 0)
      {
         altitudeMontee += variation;
      }
      else
      {
         altitudeDescendue += variation;
      }
   }
   
   printf("%d\n", altitudeMontee);
   printf("%d\n", -altitudeDescendue);
}
