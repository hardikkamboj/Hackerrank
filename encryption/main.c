#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    char s[82];
    scanf("%s",s);
    int l = strlen(s);
    int r = floor(sqrt(l));
    int c = ceil(sqrt(l)),k=0;
    //printf("the no of alphabests are %d\nthe no of rows %d\nthe number of coloumns %d\n",l,r,c);
    if(r*c<l)r = c;
    char arr[r][c];
    for(int i=0;i<r;i++)
    {
          for(int j=0;j<c;j++)
            {
                arr[i][j] = s[k];k++;
            }

    }

    for(int j=0;j<c;j++)
    {
       if(j>0)printf(" ");
        for(int i=0;i<r;i++)
        {
                if(i<r-1){printf("%c",arr[i][j]);}


                else if(i==r-1 && r*c==l)printf("%c",arr[i][j]);
                else if(i==r-1 && r*c>l)
                {if(j<l%c)printf("%c",arr[i][j]);}

        }
    }


    return 0;
}
