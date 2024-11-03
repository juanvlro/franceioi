#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int nbMembres;
   scanf("%d", &nbMembres);
   
   int poidsTotalEquipe1 = 0;
   int poidsTotalEquipe2 = 0;
   
   repeat (nbMembres)
   {
      int poidsMembre1;
      scanf("%d", &poidsMembre1);
      poidsTotalEquipe1 += poidsMembre1;
      
      int poidsMembre2;
      scanf("%d", &poidsMembre2);
      poidsTotalEquipe2 += poidsMembre2;
   }
   
   if (poidsTotalEquipe1 > poidsTotalEquipe2)
   {
      printf("L'équipe 1 a un avantage\n");
   }
   else
   {
      printf("L'équipe 2 a un avantage\n");
   }
   
   printf("Poids total pour l'équipe 1 : %d\n", poidsTotalEquipe1);
   printf("Poids total pour l'équipe 2 : %d\n", poidsTotalEquipe2);
}
