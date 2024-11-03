#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbKarvas;
   scanf("%d", &nbKarvas);
   
   repeat (nbKarvas)
   {
      int poids;
      scanf("%d", &poids);
      
      int age;
      scanf("%d", &age);
      
      int longueurCornes;
      scanf("%d", &longueurCornes);
      
      int hauteurGarrot;
      scanf("%d", &hauteurGarrot);
      
      printf("%d\n", longueurCornes * hauteurGarrot + poids);
   }
}
