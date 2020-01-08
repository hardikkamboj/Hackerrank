#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d;
    scanf("%d %d",&n,&d);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count = 0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(a[j] - a[i] == d)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(a[k] - a[j] == d){count++;break;}
                }
                break;
            }
        }
    }

    printf("%d",count);
    return 0;
}
