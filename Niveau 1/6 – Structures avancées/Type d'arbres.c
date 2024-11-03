#include <stdio.h>

int main()
{
   int hauteur;
   scanf("%d", &hauteur);
   
   int nbFolioles;
   scanf("%d", &nbFolioles);
   
   if (hauteur <= 8)
   {
      if (nbFolioles <= 5)
      {
         printf("Falarion\n");
      }
      else
      {
         printf("Tinuviel\n");
      }
   }
   else
   {
      if (nbFolioles <= 7)
      {
         printf("Dorthonion\n");
      }
      else
      {
         printf("Calaelen\n");
      }
   }
}
