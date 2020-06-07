#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int page_no=1,q_no=1,count=0;
    for(int i=0;i<n;i++)
    {
        for(q_no=1;q_no<=a[i];q_no++)
        {
            //printf("question no is %d  and page no is %d\n",q_no,page_no);
            if(q_no == page_no)count++;
            if(q_no%k==0&&q_no!=a[i])page_no++;

        }
        page_no++;
    }
    printf("%d",count);
    return 0;
}
