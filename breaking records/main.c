#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],min,max,max_no=0,min_no=0;
    scanf("%d",&a[0];)
    min = a[0]; max =a[0];
    for(int i=1;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]>max){ max = a[i]; max_no++;}
        else if(a[i]<min){ min = a[i]; min_no++;}
    }
    printf("%d %d",max_no,min_no);
    return 0;
}
