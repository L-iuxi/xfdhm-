//编写一个程序，输出如下格式的字母
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int t=0;t<5-i;t++)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)//正序打印
        {
            printf("%c",'A'+j);
        }
        for(int k=0;k<=i;k++)//倒叙打印
        {
            printf("%c",'A'+i-k);
        }
        printf("\n");
    }
    
   
    return 0;
}