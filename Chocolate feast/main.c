#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        int money,cost,wrappers;
        scanf("%d %d %d",&money,&cost,&wrappers);
        int count=0;
        int n = money;
        count = count + n/cost;
        int no_of_wrappers = n/cost + n%cost;
        while(no_of_wrappers>=wrappers)
        {
            count = count + no_of_wrappers / wrappers;
            no_of_wrappers = no_of_wrappers/wrappers + no_of_wrappers%wrappers;
        }
        printf("%d",count);
    }
    return 0;
}
