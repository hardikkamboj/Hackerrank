#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int count[102];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=1 && a[i]<=100) {count[a[i]]++;}
    }
    int sum=0;
    for(int i=0;i<=102;i++)
    {
        sum = sum + (count[i]/2);
    }
    printf("%d",sum);
    return 0;
}
