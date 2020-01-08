#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,m,count=0;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    scanf("%d %d",&d,&m);
    int sum;
    for(int i=0;i<=n-m;i++)
    {
        sum =0;
        for(int j=i;j<m+i;j++)
        {
            sum = sum + s[j];
        }
        if(sum == d) count++;
    }
    printf("%d",count);
    return 0;
}
