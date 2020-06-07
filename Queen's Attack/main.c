#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long int mod(long int n)
{
    if(n>0)return n;
    else return n*(-1);
}
long int min(long int a,long int b)
{
    if(a<b)return a;
    else return b;
}
long int max(long int a,long int b)
{
    if(a>b)return a;
    else return b;
}
int main()
{
    long int n,k,Qx,Qy;
    scanf("%lld %lld",&n,&k);
    scanf("%lld %lld",&Qx,&Qy);
    long int a[k][2];
    for(long int i=0;i<k;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%lld",&a[i][j]);
        }
    }
    long  int diff,min_diff[8];

    min_diff[0] = Qx-1;
    min_diff[4] = n - Qx;
    min_diff[2] = n - Qy;
    min_diff[6] = Qy - 1;
    min_diff[1] = n - max(Qx,Qy);
    min_diff[3] = min(n-Qy,Qx-1);
    min_diff[5] = min(Qx,Qy) - 1;
    min_diff[7] = min(n-Qx,mod(1-Qy));

    for(int dir=0;dir<8;dir++)
    {
        printf("for dir = %d  the min_diff is %d");
    }


    int direction;
    for(long int j=0;j<k;j++)
    {
       long int x = a[j][0] - Qx; long int y=a[j][1] - Qy,temp_flag=0;
     {
         if(x == 0)
        {
            if(y<0)direction=6;
            else direction=2;
            temp_flag=1;
        }
        if(y==0)
        {
            if(x<0)direction=0;
            else direction = 4;
            temp_flag=1;
        }
        if(mod(x)==mod(y))
        {
            if(x>0 && y>0)direction=3;
            else if(x>0 && y<0)direction=1;
            else if(x<0 && y>0)direction=5;
            else if(x<0 && y<0)direction=7;
            temp_flag=1;
        }
    }

    if(x<0) x = x*(-1);
    if(y<0) y = y*(-1);
     if(temp_flag==1)
     {
         if(x==y)diff=x-1;
         else diff = x + y - 1;
         if(diff < min_diff[direction]){min_diff[direction]=diff;}
    }
    }

    long int total=0;
    for(int i=0;i<8;i++)
    {
            total = total + min_diff[i];
        //printf("for dir = %d the value of moves is = %d\n",i,moves[i]);
    }
    printf("%lld",total);
    return 0;
}
