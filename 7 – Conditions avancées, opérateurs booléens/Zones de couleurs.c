#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbJetons;
   scanf("%d", &nbJetons);
   
   repeat (nbJetons)
   {
      int x, y;
      scanf("%d %d", &x, &y);
      
      if ((x < 0 || x > 90) || (y < 0 || y > 70))
      {
         printf("En dehors de la feuille\n");
      }
      else if (((x > 10 && x < 85) && (y > 10 && y < 55)) && ((x > 50 || x < 25) || (y > 45 || y < 20)))
      {
         printf("Dans une zone bleue\n");
      }
      else if (y > 60 && ((x > 15 && x < 45) || (x > 60 && x < 85)))
      {
         printf("Dans une zone rouge\n");
      }
      else
      {
         printf("Dans une zone jaune\n");
      }
   }
}
