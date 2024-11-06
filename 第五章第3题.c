//编写一个程序，提示用户输入天数，然后将其转化为周数和天数
#include<stdio.h>
int main()
{
    int day,week,day2;
    printf("请输入天数：\n");
    scanf("%d",&day);
    if(day>7)
    {
        week=day/7;
        day2=day-week*7;
    }
    printf(" %d days are %d weeks,%d days",day,week,day2);
    return 0;
}