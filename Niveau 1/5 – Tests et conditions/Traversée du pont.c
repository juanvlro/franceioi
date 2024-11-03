#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   
   int m;
   scanf("%d", &m);
   
   int somme = n + m;
   
   if (somme >= 10)
   {
      printf("Taxe spéciale !\n");
      printf("%d\n", 36);
   }
   else
   {
      printf("Taxe régulière\n");
      printf("%d\n", 2 * somme);
   }
}
