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
    int e=100;
    for(int i=0;;i = i +k)
    {
        int seat;
        seat = a[i%n];
        if(i>0) e--;
        {
            if(seat == 1) e = e - 2;
        }
        {
            if(seat == a[0])break;
        }
    }
    printf("%d",e);

    return 0;
}
