//一个水分子的质量大约为3.0e-23克，一夸脱水大约是950克。编写一个程序
//提示用户输入水的夸脱数，并显示水分子的数量
#include<stdio.h>
int main()
{
    double n;
    int t=0;
    printf("请输入水的夸脱数");
    scanf("%lf",&n);
    n=n*950/(3.0e-23);
    while(n>10)
    {
        n=n/10;
        t++;
    }
    printf("水的分子数约为：%lfe%d",n,t);

    return 0;
}