#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int somme = 0;
   
   repeat (20)
   {
      int n;
      scanf("%d", &n);
      
      somme += n;
   }
   
   printf("%d\n", somme);   
}
