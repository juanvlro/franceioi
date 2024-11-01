#include <stdio.h>
#include <stdbool.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int numeroRecherche;
   scanf("%d", &numeroRecherche);
   
   int tailleListe;
   scanf("%d", &tailleListe);
   
   bool estPresent = false;
   
   repeat (tailleListe)
   {
      int numero;
      scanf("%d", &numero);
      
      if (numero == numeroRecherche)
      {
         estPresent = true;
      }
   }
   
   if (estPresent)
   {
      printf("Sorti de la ville\n");
   }
   else
   {
      printf("Encore dans la ville\n");
   }
}
