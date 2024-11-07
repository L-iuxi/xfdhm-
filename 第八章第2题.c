//编写一个程序，读到EOF停止，程序要打印每个输入的字符及其asc||码
//一行打印10个字符
#include<stdio.h>
int main()
{
    char a[10000];
    for(int i=0;i<10000;i++)
    {
        scanf("%c",&a[i]);
        printf("%c %d",a[i],a[i]);
        if(i%10==0)
        {
            printf("\n");
        }
        if(a[i]=='#')
        {
            break;
        }
        if(a[i]=='\n')
        {
            printf("\n");
        }
        if(a[i]=='\t')
        {
            printf("\t");
        }
    }
    return 0;
}