#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int tempMin;
   scanf("%d", &tempMin);
   
   int tempMax;
   scanf("%d", &tempMax);
   
   int temp = tempMin;
   
   repeat (tempMax - tempMin + 1)
   {
      printf("%d\n", temp++);
   }   
}
