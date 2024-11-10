//编写一个程序，生成100个1-10的随机数，并以降序排列
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() 
{
    int t;
    int arr[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++) 
    {
    arr[i] = rand() % 10 + 1; 
    }

    for(int i=0;i<100;i++)
     {
            for(int j=i+1;j<100;j++)
            {
                if (arr[j]<arr[i])
                {
                t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
                 }
 
             }
     }
      

for (int i = 99; i >0; i--) {
printf("%d ", arr[i]);
}
printf("\n");

return 0;
}
