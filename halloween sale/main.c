#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,d,m,s;
    scanf("%d %d %d %d",&p,&d,&m,&s);
    int cost=p;
    int count=0;
    while(cost>m)
    {
        s = s - cost;
        cost = cost - d;
        if(s>0)count++;
    }
        while(s>=m){s = s-m;count++;}

    printf("%d",count);
    return 0;
}
