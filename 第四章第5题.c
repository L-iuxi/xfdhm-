//编写一个程序，提示用户输入以兆位每秒为单位的下载速度和以兆字节为单位的文件大小
//程序中应计算文件的下载时间，注意，这里一字节等于8位，显示小数点后两位数字
#include<stdio.h>

int main()
{
   float v,m;
   printf("请输入下载速度：\n");
   scanf("%f",&v);
   printf("请输入文件大小：\n");
   scanf("%f",&m);
   printf("At %.2f megabits per second,a file of %.2f megabytes downloads in %.2f seconds",v,m,8*m/v);
    return 0;
}