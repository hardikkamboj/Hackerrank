#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,no;
    scanf("%d %d",&n,&no);
    if(n == no){printf("0");return 0;}
    int a[no];int b[n];
    for(int i=0;i<n;i++)
    {
        b[i] = i;
    }
    for(int i=0;i<no;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<no;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i] == b[j]){b[j] =-1;break;}
        }
    }

    int count=0,max_count=0,str_len=0,i_str_len=0;
    for(int i=0;i<n;i++)
    {
        if(b[i] == -1 )break;
        else i_str_len++;
    }
    for(int i=0;i<n;i++)
    {
      if(b[i] == -1){if(count>max_count)max_count = count; count = 0;str_len=0;}
       else if(i == n-1){count++;str_len++;if(count>max_count)max_count = count;}
       else {count++;str_len++;}
    }
    printf("the value of max_count is %d,ini count is %d, last count is %d",max_count,i_str_len,str_len);printf("\n");
    if(max_count == n - 1)printf("%d",max_count);
    else if(max_count == str_len || max_count == i_str_len)printf("%d",max_count);

    else printf("%d",(max_count+1)/2);

    return 0;
}
