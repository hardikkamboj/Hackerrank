#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,positive=0,negative=0,zero=0;
    scanf("%d",&n);
    int a[n];
    float m;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0) positive++;
        else if(a[i]<0) negative++;
        else if(a[i]==0) zero++;
    }
    m = n;
    printf("%.6f\n%.6f\n%.6f\n",positive/m,negative/m,zero/m);

    return 0;
}
