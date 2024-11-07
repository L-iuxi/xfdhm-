//编写一个程序，初始化一个double类型的二维数组，使用拷贝1函数将其
//拷贝进另一个二维数组中
#include <stdio.h>

// 将源二维数组拷贝到目标二维数组
void copy_array(double source[2][3], double dest[2][3]) {
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 3; j++) {
dest[i][j] = source[i][j];
}
}
}

// 打印
void print_array(double arr[2][3]) {
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 3; j++) {
printf("%.2f ", arr[i][j]);
}
printf("\n");
}
}

int main() {

double source[2][3] = {{1.1, 2.2, 3.3},{4.4, 5.5, 6.6}};

double dest[2][3];


copy_array(source, dest);


printf("源数组：\n");
print_array(source);


printf("目标数组：\n");
print_array(dest);

return 0;
}

