#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int nbPersonnes;
   scanf("%d", &nbPersonnes);
   
   repeat (nbPersonnes)
   {
      int taille;
      scanf("%d", &taille);
      
      int age;
      scanf("%d", &age);
      
      int poids;
      scanf("%d", &poids);
      
      int aCheval;
      scanf("%d", &aCheval);
      
      int estBrun;
      scanf("%d", &estBrun);
      
      int score = 0;
      
      if (taille >= 178 && taille <= 182)
      {
         score++;
      }
      
      if (age >= 34)
      {
         score++;
      }
      
      if (poids < 70)
      {
         score++;
      }
      
      if (!aCheval)
      {
         score++;
      } 
      
      if (estBrun)
      {
         score++;
      }
      
      if (score == 5)
      {
         printf("Très probable\n");
      }
      else if (score == 4 || score == 3)
      {
         printf("Probable\n");
      }
      else if (score == 0)
      {
         printf("Impossible\n");
      }
      else
      {
         printf("Peu probable\n");
      }
   }
}
