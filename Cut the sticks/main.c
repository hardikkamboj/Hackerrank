#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j] > a[j+1])
            {
                int k;
                k =a[j];
                a[j] = a[j+1];
                a[j+1] = k;
            }
        }

    }
    int flag=0;
    while(flag == 0)
    {
        int least,count=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0) {least = a[i];break;}
        }
        for(int i=0;i<n;i++)
        {
            if(a[i] >0){count++; a[i] = a[i] - least;}
        }
        printf("%d\n",count);
        flag = 1;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0) flag=0;
        }
    }
    return 0;
}
