#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int n = 100;
   
   repeat (101)
   {
      printf("%d\n", n--);
   }
   
   printf("Décollage !\n");  
}
