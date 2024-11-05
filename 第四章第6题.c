//编写一个程序，先提示用户输入名，然后提示用户输入姓，在一行打印名和姓，下一行分别打印
//名和姓的字母数，字母数要与相应名和姓的结尾对齐，再打印一次名和姓，字母数与名和姓的开头对齐
#include<stdio.h>

int main() 
{
    int a,b;
    char n[10];
    char m[10];
   printf("请输入名：\n");
   scanf("%s",&n);
   printf("请输入姓：\n");
   scanf("%s",&m);
   a=strlen(n);
   b=strlen(m);
   printf("%s %s\n",n,m);
   printf("%*d%*d\n",a,a,b,b);//和结尾对齐
   printf("%s %s\n",n,m);
   printf("%-*d%-*d",a,a,b,b);//和开头对齐

    return 0;
}