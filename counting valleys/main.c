#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    char s[n+1];
    int lvl = 0,valley=0;
    for(int i=0;i<n;i++)
    {
        scanf("%c",&s[i]);
        if(lvl == -1 && s[i] == 'U') valley++;
        {
            if(s[i] == 'U') lvl++;
            else if(s[i] == 'D') lvl--;
        }

    }
    printf("%d",valley);
    return 0;
}
