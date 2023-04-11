#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age;

	printf("나이를 입력하십시오:");
	scanf("%d", &age);

	if (20 > age)
	{
		printf("30%% 할인입니다. \n");
	}
	else
	{
		printf("정가입니다. \n");
	}


}