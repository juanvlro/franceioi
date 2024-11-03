#include <stdio.h>

int main()
{
   int nbPierresMax;
   scanf("%d", &nbPierresMax);
   
   int hauteur = -1;
   int nbPierres = 0;
   
   while (nbPierres <= nbPierresMax)
   {
      hauteur++;
      nbPierres += (hauteur + 1) * (hauteur + 1);
   }
   
   nbPierres -= (hauteur + 1) * (hauteur + 1);
   
   printf("%d\n", hauteur);
   printf("%d\n", nbPierres);
}
