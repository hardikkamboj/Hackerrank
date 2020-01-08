#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isKarpaker(int n)
{

    int sq=n*n,l,r=0,d;
    d = No_of_digits(n);
    //printf("the no of digits is %d\n",d);
    //printf("the square is %d\n",sq);
    int i=0;l=sq;
    while(i<d)
    {

        r = (l%10)*pow(10,i) + r;
        l = l/10;
        i++;//printf("for round = %d, l = %d and r = %d\n",i,l,r);
    }
    if(l+r == n)return 1;
    else return 0;

}
int No_of_digits(int n)
{
    int count=0;
    while(n>0)
    {
        n = n/10;
        count++;
    }
    return count;
}

int main()
{
    int l,h;
    scanf("%d %d",&l,&h);
    for(int i=l;i<=h;i++)
    {
        if(isKarpaker(i) == 1)printf("%d ",i);
    }
    return 0;
}
