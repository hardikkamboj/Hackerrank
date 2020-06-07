#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[101];
    gets(s);
    long int n,count=0;
    scanf("%lld",&n);
    int l = strlen(s);
    printf("the size of string is %d",l);
    if(n>strlen(s))
    {
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'a')count++;
        }
        count = count*(n/(strlen(s)));
    }
    for(int i=0;i<(n%(strlen(s)));i++)
    {
        if(s[i] == 'a')count++;
    }
    printf("%d",count);
    return 0;
}
