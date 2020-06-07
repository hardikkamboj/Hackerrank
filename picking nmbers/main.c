#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int k=0;
        for(int j=i;j<n;j++)
        {
            if(a[i] == a[j] || a[i] == a[j] +1) k++;
        }
        if(k>max) k = max;
    }
    printf("%d",max);
    return 0;
}
