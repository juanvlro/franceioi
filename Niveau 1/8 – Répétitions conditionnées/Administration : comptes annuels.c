#include <stdio.h>

int main()
{
   int somme = 0;
   
   int n;
   scanf("%d", &n);
   
   while (n != -1)
   {
      somme += n;
      scanf("%d", &n);
   }
   
   printf("%d\n", somme);
}
