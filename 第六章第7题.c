//编写一个程序，把一个单词读入一个字符数组中，然后倒序打印这个单词
#include<stdio.h>
int main()
{
    char word[100];

    int n;
    word[0]='1';
    for(int i=0;i<100;i++)
    {
        scanf("%c",&word[i]);
        if(word[i]==' ')
        {
            word[i]='\0';
            break;
        }
    }
    n=strlen(word);
    for(int i=n;i>=0;i--)
    {
        printf("%c",word[i]);
    }
    
   
    return 0;
}