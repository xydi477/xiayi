#include<stdio.h>

int main()
{

	char c;
	scanf("%c",&c);
	if (c >= 'A', c <= 'Z')
	{
		printf("���Ǵ�д��ĸ��Сд��%c",c + 32);
	}
    else
	{
    	printf("����Сд��ĸ����д��%c",c - 32);
	}
	return 0;
}

