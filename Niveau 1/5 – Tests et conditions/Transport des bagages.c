#include <stdio.h>

int main()
{
   int nbPaquets;
   scanf("%d", &nbPaquets);
   
   int poidsPaquet;
   scanf("%d", &poidsPaquet);
   
   int total = nbPaquets * poidsPaquet;
   
   if (total > 105)
   {
      printf("Surcharge !\n");
   }
}
