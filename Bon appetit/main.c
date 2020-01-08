#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],sum =0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }

    int b,diff,pay;
    scanf("%d",&b);
    pay = (sum - a[k])/2;
    diff = b - pay;
    if(b == pay) printf("Bon Appetit");
    else printf("%d",diff);
    return 0;
}
