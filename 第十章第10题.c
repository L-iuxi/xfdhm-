//编写一个函数，将第一个数组和第二个数组中对应下标的数相加放入第三个数组
#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int arr3[5];
    for(int i=0;i<5;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        printf("%d ",arr3[i]);
    }
    return 0;
}