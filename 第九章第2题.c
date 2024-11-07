//编写一个函数，打印指定的字符j行n列
#include<stdio.h>
void chline(char ch,int j,int n)
{
   // ch=getchar();
   // scanf("%d%d",&j,&n);
    for(int i=0;i<j;i++)
    {
        for(int k=0;k<n;k++)
        {
            printf(" %c",ch);
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    int j,n;
    scanf("%d%d",&j,&n);
    ch=getchar();
    chline(ch,j,n);
    return 0;
}