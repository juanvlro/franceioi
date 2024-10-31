#include <stdio.h>

int main()
{
   int superficieArignon;
   scanf("%d", &superficieArignon);
   
   int superficieEvaran;
   scanf("%d", &superficieEvaran);
   
   if (superficieArignon > superficieEvaran + 10)
   {
      printf("La famille Arignon a un champ trop grand\n");
   }
   
   if (superficieEvaran > superficieArignon + 10)
   {
      printf("La famille Evaran a un champ trop grand\n");
   }
}
