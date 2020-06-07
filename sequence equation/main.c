#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i == a[j])
            {for(int l=1;l<=n;l++)
            {
                if(a[l] == j) printf("%d",l);
            }
            }
        }
    }
    return 0;
}
