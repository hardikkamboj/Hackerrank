#include <stdio.h>
#include <stdlib.h>

int absolute_diff(int a,int b)
{
    int diff;
    diff = a-b;
    if(diff>=0)return diff;
    else return diff*(-1);
}


int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=1000;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int dist;
            if(a[i] == a[j])dist =  absolute_diff(i,j);
            if(dist<min)min = dist;
        }
    }
    printf("%d",min);
    return 0;
}
