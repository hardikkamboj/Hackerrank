#include <stdio.h>
#include <stdlib.h>

char *convert(int n)
{
    if(n>30)n = 60-n;
    char *s;

    if(n==1) {s = "one";return s;}

    else if(n==2) {s = "two";return s;}
    else if(n == 3 ){s = "three"; return s;}
    else if(n == 4){s = "four"; return s;}
    else if(n == 5){s = "five"; return s;}
    else if(n == 6){s = "six"; return s;}
    else if(n ==7 ){s = "seven"; return s;}
    else if(n == 8){s = "eight"; return s;}
    else if(n == 9){s = "nine"; return s;}
    else if(n == 10){s = "ten"; return s;}
    else if(n == 11){s = "eleven"; return s;}
    else if(n == 12){s = "twelve"; return s;}
    else if(n == 13){s = "thirteen"; return s;}
    else if(n == 14){s = "fourteen"; return s;}
    else if(n == 15){s = "quater"; return s;}
    else if(n == 16){s = "sixteen"; return s;}
    else if(n == 17){s = "seventeen"; return s;}
    else if(n == 18){s = "eighteen"; return s;}
    else if(n == 19){s = "nineteen"; return s;}
    else if(n == 20){s = "twenty"; return s;}
    else if(n ==21 ){s = "twenty one"; return s;}
    else if(n == 22){s = "twenty two"; return s;}
    else if(n == 23){s = "twenty three"; return s;}
    else if(n == 24){s = "twenty four"; return s;}
    else if(n == 25){s = "twenty five"; return s;}
    else if(n == 26){s = "twenty six"; return s;}
    else if(n ==27 ){s = "twenty seven";return s;}
    else if(n ==28 ){s = "twenty eight";return s;}
    else if(n == 29){s = "twenty nine";return s;}
    else if(n == 30){s = "half";return s;}

}

char *second_part(int n)
{
    char *s;
    if(n==1){s = "minute past";return s;}
    if(n==15 || n==30){s = "past";return s;}
    if(n==45){s = "to";return s;}
    else if(n>=2 && n<30){s = "minutes past";return s;}
    else if(n>=31 && n<59){s = "minutes to";return s;}
    else (n == 59){s = "minute to";return s;}
}
char *hour_time(int hour,int min)
{
    if(min<=30)return convert(hour);
    else return convert(hour + 1);
}
int main()
{
    char *s1,*s2,*s3;
    int hour,min;
    scanf("%d %d",&hour,&min);
    if(min==0)
    {
        s1 = hour_time(hour,min);
        printf("%s o' clock",s1);return 0;
    }
    s1 = convert(min);
    s2 = second_part(min);
    s3 = hour_time(hour,min);
    printf("%s %s %s",s1,s2,s3);
    return 0;

}
