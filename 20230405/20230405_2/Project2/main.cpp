#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int x;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("�����ڸ�: %d\n", x / 10);
	printf("�����ڸ�: %d\n", x % 10);

	return 0;

}