#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,count = 0;
    scanf("%d %d",&m,&n);
    int a[m],b[n];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=1;i<100;i++)
    {
        int flag = 1;
        for(int k=0;k<m;k++)
        {
            if(i % a[k] != 0) flag = 0;
        }
        for(int j=0;j<n;j++)
        {
            if(b[j] % i !=0) flag = 0;
        }
        if(flag == 1) count++;
    }
    printf("%d",count);
    return 0;
}
