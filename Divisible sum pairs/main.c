#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,count=0,sum;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum = a[i] + a[j];
            if(sum % k == 0) count++;
        }
    }
    printf("%d",count);
    return 0;
}
