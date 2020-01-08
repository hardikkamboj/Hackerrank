#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char year[5];
    scanf("%s",year);

    int x = atoi(year);
    if(x>2700 || x<1700){break;}
    if(x>=1919)
    {
        if(x%4 == 0)
        {  printf("12.09.%s",year);}

        else
        {
             printf("13.09.%s",year);
        }
    }

    else if(x == 1918) printf("26.09.1918");

    else if(x<=1917)
    {
        if(x%400==0 || (x%4 ==0 && x%10!=0))


            {printf("12.09.%s",year);}
        else { printf("13.09.%s",year);}
    }

    return 0;
}
