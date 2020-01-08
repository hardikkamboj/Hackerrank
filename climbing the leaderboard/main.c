#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int score[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
    int m;
    scanf("%d",&m);
    int alice[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&alice[i]);
    }
    int rank =1,max=0;
    for(int j=1;j<n;j++)
    {
        int high=score[0];
        if(score[j]<high){rank++;high=score[j];}

    }
    int i=n-1;
    for(int j=0;j<m;j++)
    {
        while(i>=0)
        {
            if(alice[j] < score[i]){printf("%d\n",rank);max=alice[j];break;}
            else if(alice[j] > score[i] && score[i]>max){rank--;max=score[i];i--;}
            else if(alice[j] > score[i] && score[i]==max)i--;
            else if(alice[j] == score[i] && score[i]>max){rank--;printf("%d\n",rank);max=score[i];break;}
        //printf("%this is the value of i = %d\n",i);
        }
        if(i==-1){printf("1\n");}
    }

    return 0;
}
