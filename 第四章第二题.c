//编写一个程序，提示用户输入名和姓，然后以如下要求打印出来
//a.打印名和姓，包括双引号
//b.在宽度为20的字段右端打印名和姓，包括双引号
//c.在宽度为20的字段左端打印名和姓，包括双引号
//d.在比姓名宽3的字段中打印名和姓
#include<stdio.h>

int main()
{
    int i;
   char a[10];
   char b[10];
   int width=strlen(a)+strlen(b)+3;
   
   printf("请输入姓：\n");
   scanf("%s",&a);
   printf("请输入名：\n");
   scanf("%s",&b);
   printf("a.%s %s\n",a,b);
   printf("b.%20s %s\n",a,b);
   printf("c.%-20s %s\n",a,b);
   printf("d.%s %-*s\n",width,a,b);//*表示宽度是动态的，根据值提供
    return 0;
}