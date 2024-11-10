//编写一个函数，接受两个指向字符串的指针作为参数，如果两个字符串中包含第一个字符串
//返回第一个字符串开始的地址
#include <stdio.h>

char *find_substring(const char *str1, const char *str2) {
// 检查第二个字符串是否为空，若为空则返回空指针
if (str2 == NULL || *str2 == '\0') {
return NULL;
}

// 遍历第一个字符串，查找第二个字符串
for (const char *p = str1; *p != '\0'; p++) {
// 如果当前字符匹配第二个字符串的第一个字符
if (*p == *str2) {
// 检查接下来的字符是否匹配整个第二个字符串
const char *s1 = p;
const char *s2 = str2;
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
s1++;
s2++;
}
// 如果第二个字符串完全匹配，则返回匹配的第一个字符地址
if (*s2 == '\0') {
return (char *)p;
}
}
}

// 如果没有找到匹配，返回空指针
return NULL;
}

int main() {
const char *str1 = "This is a simple test string.";
const char *str2 = "simple";

char *result = find_substring(str1, str2);

if (result) {
printf("子字符串 '%s' 首次出现的位置在: %p\n", str2, result);
printf("匹配的字符是: %c\n", *result);
} else {
printf("子字符串 '%s' 没有找到\n", str2);
}

return 0;
}
