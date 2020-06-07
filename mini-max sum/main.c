#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
     unsigned long total=0,lowest,highest;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        total = total + a[i];
        lowest = a[0];highest = a[0];
        if(lowest<a[i]) lowest = a[i];
        else if(highest>a[i]) highest = a[i];
    }
    printf("%lu\n",total - lowest);
    printf("%lu",total - highest);
   return 0;
}
