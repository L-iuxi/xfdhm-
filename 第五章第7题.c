//编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值
//设计一个函数
#include<stdio.h>
int L(double num)
{
    num=num*num*num;
     printf("\n%lf",num);
}
int main()
{
    double a;
    scanf("%lf",&a);
    L(a);
   
    return 0;
}