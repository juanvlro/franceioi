#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int n = 1;
   
   repeat (100)
   {
      printf("%d\n", n++);
   }
   
   printf("J'arrive !");
}
