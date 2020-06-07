#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
      {
          int b,w,bc,wc,z,cost;
          scanf("%d %d",&b,&w);
          scanf("%d %d %d",&bc,&wc,&z);
            if(bc>wc + z)cost = b*(wc+z) + w*wc;
            else if(wc > bc+z) cost = w*(bc+z) + b*bc;
            else cost = b*bc + w*wc;
            printf("%d\n",cost);



      }
   return 0;
}
