#include <stdio.h>

int main()
{
   int heure;
   scanf("%d", &heure);
   
   int prix = 10 + 5 * heure;
   
   if (prix > 53)
   {
      prix = 53;
   }
   
   printf("%d\n", prix);
}
