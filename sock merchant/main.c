#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n],p;
    for(p=0;p<n;p++);
    {
        scanf("%d",&a[p]);
    }
    int flag =1;
    for(int i=0;i<n-1;i++)
    {
        int l=1;
        for(int k=0;k<i;k++)
        {
            if(a[i] == a[k] && i>0) flag =0;
        }
        if(flag == 1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i] == a[j]) l++;
            }
            sum = sum + l/2;
        }

    }
    printf("%d",sum);

    return 0;
}
