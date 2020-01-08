#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],num=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i] <= 0) num++;
        }
        if(num >= k) printf("NO");
        else printf("YES");
    }
    return 0;
}
