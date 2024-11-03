#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int dateDebut, dateFin;
   scanf("%d %d", &dateDebut, &dateFin);

   int nbInvites;
   scanf("%d", &nbInvites);
   
   int nbSuspects = 0;
   
   repeat (nbInvites)
   {
      int dateArrivee, dateDepart;
      scanf("%d %d", &dateArrivee, &dateDepart);
      
      if (!(dateArrivee > dateFin || dateDepart < dateDebut))
      {
         nbSuspects++;
      }
   }
   
   printf("%d\n", nbSuspects);
}
