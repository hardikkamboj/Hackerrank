#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        int n;
        scanf("%d",&n);
        int num = n,count=0;
        while(num>0)
        {
            int a;
            a = num%10;
            if(a!=0 && n%a==0)count ++;
            n = n/10;
        }
        printf("%d\n",count);

    }
    return 0;
}
