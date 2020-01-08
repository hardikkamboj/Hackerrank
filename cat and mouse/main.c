#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,y,z;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        int diff[3];
        diff[1] = x-y; diff[2] = x-z;
        for(int j=1;j<=2;j++)
        {
            if(diff[j]<0) diff[j] = diff[j]*(-1);
        }
        if(diff[1] > diff[2]) printf("Cat B");
        else if(diff[1] < diff[2]) printf("Cat A");
        else if(diff[1] == diff[2]) printf("Mouse C");
    }
    return 0;
}
