#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    int front,back;
    front = p/2;
    {
        if(n%2==0){back = (n-p+1)/2;}
        else {back = (n-p)/2;}
    }
    if(front>back){printf("%d",front);}
    else printf("%d",back);
    return 0;
}
