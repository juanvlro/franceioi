#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbLignes;
   scanf("%d", &nbLignes);
   
   repeat (nbLignes)
   {
      printf("Je dois suivre en cours\n");
   }   
}
