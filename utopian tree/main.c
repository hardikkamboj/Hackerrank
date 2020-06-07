#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        scanf("%d",&n);
        int height = 1;
        for(int i=1;i<=n;i++)
        {
            if(i%2 == 1){height = height*2;}
            else if(i%2 == 0)height++;
        }
        printf("%d",height);
    }
    return 0;
}
