//编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式。
//然后，如果系统支持，打印为16进计数法，按如下格式输出
#include<stdio.h>
int main()
{
    int t;
    double n,h;
    printf("Enter a floating-point value\n");
    scanf("%lf",&n);
    printf("fixed-point notation: %lf\n",n);
    h=n;
    while(h>10)
    {
        h=n/10;
        t++;
    }
    printf("exponential notation: %lfe+%d\n",h,t);
    printf("p notation: %#x\n",n);
    return 0;
}