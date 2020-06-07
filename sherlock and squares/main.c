#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int t;
   scanf("%d",&t);
   for(int k=1;k<=t;k++)
   {
    int l,h;
    scanf("%d %d",&l,&h);
    int ans;
    ans = (int)(floor(sqrt(h))) - (int)(ceil(sqrt(l)));
    printf("%d",ans+1);
   }
    return 0;
}
