#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int n = 1;
   
   repeat (20)
   {
      int m = 1;

      repeat (20)
      {
         printf("%d ", n * m);
         m++;
      }
      
      printf("\n");
      
      n++;
   }   
}
