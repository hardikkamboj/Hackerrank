#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,t,a,b,m,n,no_of_apples=0,no_of_oranges=0;
    scanf("%d %d %d %d %d %d",&s,&t,&a,&b,&m,&n);
    int apple[m],orange[n];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&apple[i]);
        apple[i] = apple[i] + a;
        if(apple[i]>=s && apple[i]<=t) no_of_apples++;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&orange[i]);
        orange[i] = orange[i] + b;
        if(orange[i]>=s && orange[i]<=t) no_of_oranges++;
    }
    printf("%d\n",no_of_apples);
    printf("%d",no_of_oranges);

    return 0;
}
