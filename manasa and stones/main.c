#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int count = 1;count<=t;count++)
    {
        int a,b,n;
        scanf("%d %d %d",&n,&a,&b);
        int arr[n];
        if(a>b)
        {
            int t = b;
            b = a;
            a = t;
        }
        int i=n-1,j=0;
        for(int k=0;k<n;k++)
        {
            arr[k] = a*(i) + b*(j);
            i--;
            j++;
        }
          for(int k=0;k<n;k++)
         {
            if(a[k]!= a[k+1])
            printf("%d ",arr[k]);
         }
         printf("\n");
    }
    return 0;
}
