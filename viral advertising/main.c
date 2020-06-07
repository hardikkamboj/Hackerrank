#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num=5,total=0;
    for(int i=1;i<=n;i++)
    {
        int like,share;
        like = num/2;
        share = like*3;
        total = total + like;
        num = share;
    }
    printf("%d",total);
    return 0;
}
