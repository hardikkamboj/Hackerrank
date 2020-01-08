#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%s",s);
    int m;
    m = strlen(s);
    int count[10];
    for(int i=0;i<10;i++)
    {
        count[i] = 0;
    }

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=9;j++)
        {
            int x = s[i] - '0';
            if(j == x) count[j]++;
        }
    }
    for(int i=0;i<=9;i++)
    {
        printf("%d ",count[i]);
    }

    return 0;
}
