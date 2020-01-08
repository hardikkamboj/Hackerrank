#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int score[n];
    for(int i=0;i<n;i++)
    {scanf("%d",&score[i]);}
     int m;
     scanf("%d",&m);
     int alice[m];
     for(int i=0;i<m;i++)
     {
         scanf("%d",&alice[i]);
     }
     int rank=1,min1=score[0];
     {
         for(int i=1;i<n;i++)
         {
             if(score[i]<min1){rank++;min1 = score[i];}
         }
     }
    int i = n-1;
    for(int j=0;j<m;j++)
    {
        while(1)
        {
            if(i==-1){printf("1\n");break;}
            else if(alice[j]<score[i]){printf("%d\n",rank+1);break;}
            else if(alice[j] > score[i] && score[i]<score[i-1]){i--;rank--;}
            else if(alice[j] > score[i] && score[i-1] == score[i]){i--;}
            else if(alice[j] == score[i]){printf("%d\n",rank);break;}

        }
    }
    return 0;
}
