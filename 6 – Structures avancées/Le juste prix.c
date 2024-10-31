#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbMarchands;
   scanf("%d", &nbMarchands);
   
   int position = 1;
   
   int prixMin = 1000000;
   int positionMin = 1;
   
   repeat (nbMarchands)
   {
      int prix;
      scanf("%d", &prix);
      
      if (prix <= prixMin)
      {
         prixMin = prix;
         positionMin = position;
      }
      
      position++;
   }
   
   printf("%d\n", positionMin);
}
