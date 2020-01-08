#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        a[i] = a[i]%2;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 1)count++;
    }
    int no_of_loaves=0;
    if(count%2 == 1){printf("NO");return 0;}
    //Now the condition where the answernis no is complete...we now code for the remiaing condition ..
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 0 && flag == 1)no_of_loaves = no_of_loaves + 2;
        else if(a[i] == 1 && flag == 0){no_of_loaves++; flag = 1;}
        else if(a[i] == 1 && flag == 1){no_of_loaves++;flag=0;}
    }
    printf("%d",no_of_loaves);


    return 0;
}
