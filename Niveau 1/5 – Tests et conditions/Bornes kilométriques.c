#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   
   int m;
   scanf("%d", &m);
   
   int distance = n - m;
   
   if (distance < 0)
   {
      distance = -distance;
   }
   
   printf("%d\n", distance);
}
