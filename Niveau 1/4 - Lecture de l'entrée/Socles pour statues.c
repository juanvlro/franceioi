#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int largeurSocleInf;
   scanf("%d", &largeurSocleInf);
   
   int largeurSocleSup;
   scanf("%d", &largeurSocleSup);
   
   int socle = largeurSocleInf;
   
   int volume = 0;
   
   repeat (largeurSocleInf - largeurSocleSup + 1)
   {
      volume += socle * socle;
      socle--;
   }
   
   printf("%d\n", volume);
}
