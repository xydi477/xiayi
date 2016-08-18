#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	//错误：不允许把多个短语句写在一行中 
	if(a > b)
		printf("a>b\n");
    return 0;
}
