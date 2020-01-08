#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int  a[28];
    for(int i=1;i<27;i++)
    {
        scanf("%d",&a[i]);
    }
    char s[20];
    for(int i=0;i<11;i++)
    {scanf("%c",&s[i]);}
    int l = strlen(s);
    int max=0;
    for(int i=0;i<=l;iA
    {
        int x,length;
        x = s[i];
        length = a[x-96];
        if(length > max){max = length;}
    }
    printf("%d",(l-1)*max);
    return 0;
}
