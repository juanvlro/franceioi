#include <stdio.h>

int main()
{
   int mois;
   scanf("%d", &mois);
   
   if (mois == 11)
   {
      printf("%d\n", 29);
   }
   else if ((mois >= 4 && mois <= 6) || mois == 10)
   {
      printf("%d\n", 31);
   }
   else
   {
      printf("%d\n", 30);
   }
}
