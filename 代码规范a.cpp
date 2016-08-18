#include<stdio.h>

int main()
{

	char c;
	scanf("%c",&c);
	if (c >= 'A', c <= 'Z')
	{
		printf("这是大写字母，小写是%c",c + 32);
	}
    else
	{
    	printf("这是小写字母，大写是%c",c - 32);
	}
	return 0;
}

