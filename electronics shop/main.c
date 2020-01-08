#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,n,m;
    scanf("%d %d %d",&b,&m,&n);
    int a[n],u[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<m;j++)
    {
        scanf("%d",&u[j]);
    }
    int max =0,flag=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int price;
            price = a[i] + u[j];
            if(price>max && price<=b){max = price; flag=0;}
        }
    }
    if(flag == 0)printf("%d",max);
    else if(flag == 1) printf("-1");
    return 0;
}
