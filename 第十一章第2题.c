//设计并测试一个函数，在n个字符或遇到空格，制表符，换行符时停止
//把结果储存在一个数组里，他的地址被传递作为一个参数
#include<stdio.h>
int fx()
{

    char c;
   
    int t=0;
    int n;
    char a[n];
   printf("请输入字符个数：\n");
   scanf("%d",&n);
    while(1)
    {
        c = getchar();
        if(c==' '||c=='\n'||c=='\t')
    
        {
            break;
        }
        if(t<n)
        {
        
            a[t]=c;
            t++;
         }  // printf("%c",a[t]);
        
    }
    for(int i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}

int main()
{
    fx();
    return 0;
}