#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,v1,v2,pos1,pos2;
    scanf("%d %d %d %d ",&x1,&v1,&x2,&v2);
    if(x1 > x2) return 0;
    if(v2 > v1) {printf("NO"); return 0;}
    pos1 = x1; pos2 = x2;
    for(int i=0;;i++)
    {
        pos1 = pos1 + v1; pos2 = pos2 + v2;
        if(pos1 == pos2){printf("YES");break;}
        else if(pos2>pos1){printf("NO");break;}
    }
    return 0;
}
