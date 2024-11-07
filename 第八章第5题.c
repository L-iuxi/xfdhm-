//修改8.4中的猜数字程序，使用更智能的策略
#include<stdio.h>
int main()
{
    int random=rand()%100;
    int last=random;
    int guess=last;
    char res;
    printf("Pick an integer from 1 to 100.I will try to guess");
    printf("\nRespond with a y if my guess is right and with an");
    printf("\nn if it is wrong");
    printf("\nUn...is your number %d?\n",random);
    
    while((res=getchar())!='y')
    {

       printf("is it big or small?");
        if(getchar()=='b')
        {
           printf("Well,then,is it %d?\n",--guess);
        }
        else if(getchar=='s')
        {
           printf("Well,then,is it %d?\n",--guess);
        }
     
    }
    return 0;
}