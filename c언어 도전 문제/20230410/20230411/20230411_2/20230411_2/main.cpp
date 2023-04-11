#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b; //날짜  

	a = 0;
	b = 0;
	

	printf("첫쨋날 체감온도를 입력하십시오:", a);
	scanf("%d", &a);

	printf("둘쨋날 체감온도를 입력하십시오:", b);
	scanf("%d", &b);

	if (33 <= a && 33 <= b)
	{
		printf("폭염주의보 입니다. \n");
	}
	else if (35 <= a && 35 <= b)
	{
		printf("폭염경보 입니다. \n");
	}
	else
	{
		printf("폭염주의보,폭염경보 둘다아닙니다. \n");
	}
	return 0;
}