#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100];
    char s2[100];
    int k;
    gets(s1);
    gets(s2);
    scanf("%d",&k);
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int count=0;
    for(int i=0;i<=n1;i++)
    {
        if(s1[i] == s2[i]) count++;
        else break;
    }
    int l = n2 - count + n1 - count;
    if(k == l)printf("YES");
    else printf("NO");
    return 0;
}
