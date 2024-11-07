//编写一个函数，返回储存在int类型数组中的最大值
#include <stdio.h>

int find_max_value(int arr[], int size) {



int max = arr[0]; 
for (int i = 1; i < size; i++) {
if (arr[i] > max) {
max = arr[i]; 
}
}
return max;
}

int main() {
int arr[] = {3, 5, 1, 8, 7, 2};
int size = sizeof(arr) / sizeof(arr[0]);
int max = find_max_value(arr, size);
printf(" %d\n", max);
return 0;
}
