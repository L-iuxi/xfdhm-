//
#include<stdio.h>
int main()
{
    int ch;
    FILE * fp;
    char fname[50];

    printf("Enter the name of the file;\n");
    scanf("%s",&fname);
    fp=fopen(fname,"r");
    if(fp=="NULL")
    {
        printf("failed");
        exit(1);
    }
    while((ch=getchar(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}