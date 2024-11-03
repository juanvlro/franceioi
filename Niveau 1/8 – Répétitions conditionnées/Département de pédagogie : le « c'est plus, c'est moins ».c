#include <stdio.h>

int main()
{
   int nbSecret;
   scanf("%d", &nbSecret);
   
   int nbEssais = 1;
   
   int n;
   scanf("%d", &n);
   
   while (n != nbSecret)
   {
      if (n > nbSecret)
      {
         printf("c'est moins\n");
      }
      else
      {
         printf("c'est plus\n");
      }
      
      scanf("%d", &n);
      nbEssais++;
   }
   
   printf("Nombre d'essais nécessaires :\n");
   printf("%d\n", nbEssais);
}
