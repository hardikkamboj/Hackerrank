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
    int count,num,max=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i] == a[j]) count++;
        }
        if(count>max){max=count;num = count;}
    }
    printf("%d",n - num);
    return 0;
}
