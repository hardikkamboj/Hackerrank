#include <stdio.h>
#include <stdlib.h>
void gettime();
int main()
{
    char time[11];
    scanf("%s",time);

    if(time[8] == 'A')
    {
        if(time[0]=='1' && time[1]=='2')
            {time[0] = 0; time[1] = 0;
        gettime();}
        else {gettime();}

    }
    else if(time[8] == 'P')
    {
        if(time[0] == '1' && time[1] == 2 ) gettime();
        else
            {
                time[0] = time[0] + 1;
                time[1] = time[1] + 2;
                gettime();
            }
    }

    return 0;
}
void gettime(char ch[11])
{

    for(int i=0;i<8;i++)
        printf("%c",ch[i]);
}
