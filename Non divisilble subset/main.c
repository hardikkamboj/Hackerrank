#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],r[k];
    for(int j=0;j<k;j++)
    {
        r[j] = 0;
    }

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        while(a[i]>=k)
        {a[i] = a[i]%k;}
        r[a[i]]++;
    }



    int count=0;
    for(int i=1;i<=k/2;i++)
    {
       if(k%2==0 && i == k/2 && r[k/2]>0)count++;
       else
        count = count + max(r[i],r[k-i]);
    }

    if(r[0]>0){count++;}
    printf("%d",count);



    return 0;
}
