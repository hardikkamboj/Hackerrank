#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A '... 'Z':
        printf("THe letter is uppercase");break;
        default:
        printf("The letter is lowercase");break;
    }


    return 0;
}
