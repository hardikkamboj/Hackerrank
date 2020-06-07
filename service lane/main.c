#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int k=1;k<=t;k++)
    {
        int lower,higher;
        scanf("%d %d",&lower,&higher);
        int max = 3;
        for(int i=lower;i<=higher;i++)
        {
            if(a[i] < max)max = a[i];
            if(max == 1)break;
        }
        printf("%d\n",max);
    }
    return 0;
}
