//在一个循环中编写并调用一个函数，该函数返回他被调用的次数
#include<stdio.h>
int times=1;
int hello()
{
    printf("hello\ntimes=%d\n",times);
    times++;
    
}
int main()
{
    char c;
    while((c=getchar())!='\n')
    {
        hello();
    }
return 0;
}