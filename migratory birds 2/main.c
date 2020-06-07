#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int count[6];
    for(int i=1;i<=5;i++)
    {
        count[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        count[a[i]]++;
    }
    int num,max=0;
    for(int i=1;i<=5;i++)
    {
        if(count[i]>max) {max = count[i]; num = i;}

    }
    printf("%d",num);
    return 0;
}
