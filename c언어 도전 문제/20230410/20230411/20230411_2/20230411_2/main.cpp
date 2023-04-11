#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a; //온도 
	int b; //날짜

	printf("일최고체감온도를 입력 하십시오:");
	scanf("%d", &a);

	printf("온도가 지속된 날짜를 입력하십시오:");
	scanf("%d", &b);

	if (33 <= a && 2 <= b)
	{
		printf("폭염주의보 입니다. \n");
	}
	else if (35 <= a && 2 <= b)
	{
		printf("폭염경보 입니다. \n");
	}
	else
	{
		printf("폭염주의보, 폭염경보 없습니다. \n");
	}
	return 0;
}