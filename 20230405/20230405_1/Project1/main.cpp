#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int cm, feet;
	double inch;

	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &cm);

	inch = double(cm) / 2.54;
	feet = inch / 12;
	inch = inch - double(feet) * 12;

	printf("%dcm는 %d피트 %.2f인치 입니다. \n", cm, feet, inch);

	return 0;

}