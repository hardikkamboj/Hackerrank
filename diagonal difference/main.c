#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,m=0,b=0,diff;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n");
    for(k=0;k<n;k++)
    {

        m = m + a[k][k];
        b = b + a[k][n-k-1];
    }
    printf("%d %d\n",m,b);
    diff = m-b;
     if(diff>0)printf("%d",diff);
                else printf("%d",(-1)*diff);
    return 0;
}
