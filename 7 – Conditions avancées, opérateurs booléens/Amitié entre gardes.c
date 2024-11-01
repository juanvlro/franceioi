#include <stdio.h>

int main()
{
   int heureDebut1;
   scanf("%d", &heureDebut1);
   
   int heureFin1;
   scanf("%d", &heureFin1);
   
   int heureDebut2;
   scanf("%d", &heureDebut2);
   
   int heureFin2;
   scanf("%d", &heureFin2);
   
   if (heureDebut2 > heureFin1 || heureFin2 < heureDebut1)
   {
      printf("Pas amis\n");
   }
   else
   {
      printf("Amis\n");
   }
}
