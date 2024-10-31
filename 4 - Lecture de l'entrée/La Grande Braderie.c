#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int positionDepart;
   scanf("%d", &positionDepart);
   
   int largeurEmplacement;
   scanf("%d", &largeurEmplacement);
   
   int nbVendeurs;
   scanf("%d", &nbVendeurs);
   
   int position = positionDepart;
   
   repeat (nbVendeurs + 1)
   {
      printf("%d\n", position);
      position += largeurEmplacement;
   }
}
