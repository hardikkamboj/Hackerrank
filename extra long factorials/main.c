#include <stdio.h>
#include <stdlib.h>

int count(int a)
{
    int count = 0,c=a;
    while(c>0)
    {
        c = c/10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);
    long int a[20];
    for(int i=0;i<20;i++)
    {
        a[i] = 0;
    }
    long int factorial=1;
    int index=0;
    while(n>0)
    {
        factorial = n*(n-1)
        n--;
    }
    printf("%d",factorial);
    return 0;
}
