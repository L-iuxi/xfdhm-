//编写一个程序，提示用户输入一个身高（厘米）并分别以厘米和英寸为单位
//显示该值，允许有小数部分。程序能让该用户持续输入身高，直到一个非真值
#include<stdio.h>
int main()
{
    double h;
    double y=h/2.54/12.0;
    double c=h/2.54-y*12.0;
    printf("Enter a height in centimeters\n");
    
     do 
    {
    scanf("%lf",&h);
    printf("%.1lf cm = %lf feet , %.1lf inches\n",h,y,c);
    }while(h>0);
    return 0;
}