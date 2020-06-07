#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        int n,m,s;
        scanf("%d %d %d",&n,&m,&s);
        int seat;
        seat = (s +m-1)%n;
        if(seat == 0){printf("%d",n);}
        else printf("%d",seat);
    }
    return 0;
}
