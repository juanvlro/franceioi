#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbNombres;
   scanf("%d", &nbNombres);
   
   int nombre = 1;
   int n = 66;
   
   repeat (nbNombres)
   {
      printf("%d\n", n);
      n *= ++nombre;  
   }
}
