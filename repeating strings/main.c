#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[101];
    gets(s);
    long int n;
    scanf("%lld",&n);
    long int count=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i] == 'a') count++;
    }
    count = count*(n/strlen(s));
    for(int i=0;i<n%strlen(s);i++)
    {
        if(s[i] == 'a') count++;
    }
    printf("%d",count);
    return 0;
}
