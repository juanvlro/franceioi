#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbLieux;
   scanf("%d", &nbLieux);
   
   int nbVilles = 0;
   
   repeat (nbLieux)
   {
      int nbHabitants;
      scanf("%d", &nbHabitants);
      
      if (nbHabitants > 10000)
      {
         nbVilles++;
      }
   }
   
   printf("%d\n", nbVilles);
}
