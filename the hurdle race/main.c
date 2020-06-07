#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max) max = a[i];
    }
    if(max > k) printf("%d",max - k);
    else {printf("0");}
    return 0;
}
