/*Une chambre ne coûte rien si on a 60 ans (l'âge de l'aubergiste !) et 5 écus si on a strictement moins de 10 ans. Pour les autres personnes c'est 30 écus plus un supplément de 10 écus si on a au moins 20 kilos de bagages.
Votre programme doit lire deux entiers, l'âge et le poids des bagages de la personne et doit afficher le prix, sous la forme d'un entier.*/

#include <stdio.h>

int main()
{
   int age;
   scanf("%d", &age);
   
   int poidsBagages;
   scanf("%d", &poidsBagages);
   
   if (age == 60)
   {
      printf("%d\n", 0);
   }
   else if (age < 10)
   {
      printf("%d\n", 5);
   }
   else
   {
      if (poidsBagages < 20)
      {
         printf("%d\n", 30);
      }
      else
      {
         printf("%d\n", 40);
      }
   }
}
