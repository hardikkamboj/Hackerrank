#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c=0,largest=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>largest) largest = a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i] == largest)c++;
    }
    printf("%d",c);
    return 0;
}
