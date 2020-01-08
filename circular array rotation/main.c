#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,t;
    scanf("%d",&n,&m,&t);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(int i=0;i<n;i++)
    {
        b[(m+i)%n] = a[i];
    }
    for(int j=1;j<=t;j++)
    {
        int k;
        scanf("%d",&k);
        printf("%d",b[k]);
    }

    return 0;
}
