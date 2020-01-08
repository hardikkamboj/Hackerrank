#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,h,k,answer=0;
    scanf("%d %d %d",&l,&h,&k);
    for(int i=l;l<=h;i++)
    {
        int inverse=0,diff,n;
        n = i;
        while(n!=0)
        {
            inverse = inverse*(10);
            inverse = inverse + (n%10);
            n = n/10;
        }
        diff = i - inverse;
        {
            if(diff<0) diff = diff*(-1);
        }
        if(diff%k == 0) answer++;
    }
    printf("%d",answer);
    return 0;
}
