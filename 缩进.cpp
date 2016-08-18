#include<stdio.h>
int main()
{
    int a, b;					
//错误：没有缩进 
    scanf("%d%d", &a, &b);
	if(a > b)
	    printf("a>b\n");
//错误：if语句没有缩进 
    return 0;
//正确：有缩进，且是4个空格 
}
