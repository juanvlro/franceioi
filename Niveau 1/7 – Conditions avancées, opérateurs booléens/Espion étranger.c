#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int dateDebut;
   scanf("%d", &dateDebut);
   
   int dateFin;
   scanf("%d", &dateFin);
   
   int nbPersonnes;
   scanf("%d", &nbPersonnes);
   
   int nbSuspects = 0;
   
   repeat (nbPersonnes)
   {
      int heureArrivee;
      scanf("%d", &heureArrivee);
      
      if (heureArrivee >= dateDebut && heureArrivee <= dateFin)
      {
         nbSuspects++;
      }
   }
   
   printf("%d", nbSuspects);
}
