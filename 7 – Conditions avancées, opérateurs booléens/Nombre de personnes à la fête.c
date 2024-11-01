#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int nbPersonnes;
   scanf("%d", &nbPersonnes);
   
   int maxPersonnes = 0;
   int capacite = 0;
   
   repeat (2 * nbPersonnes)
   {
      int personne;
      scanf("%d", &personne);
      
      if (personne > 0)
      {
         capacite++;
         
         if (capacite > maxPersonnes)
         {
            maxPersonnes = capacite;
         }
      }
      else
      {
         capacite--;
      }
   }
   
   printf("%d\n", maxPersonnes);
}
