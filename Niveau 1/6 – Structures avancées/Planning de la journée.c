#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int position;
   scanf("%d", &position);
   
   int nbVillages;
   scanf("%d", &nbVillages);
   
   int nbVillagesProches = 0;
   
   repeat (nbVillages)
   {
      int positionVillage;
      scanf("%d", &positionVillage);
      
      int distance = position - positionVillage;
      
      if (distance < 0)
      {
         distance = -distance;
      }
      
      if (distance <= 50)
      {
         nbVillagesProches++;
      }
   }
   
   printf("%d\n", nbVillagesProches);
}
