#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a; //�µ� 
	int b; //��¥

	printf("���ְ�ü���µ��� �Է� �Ͻʽÿ�:");
	scanf("%d", &a);

	printf("�µ��� ���ӵ� ��¥�� �Է��Ͻʽÿ�:");
	scanf("%d", &b);

	if (33 <= a && 2 <= b)
	{
		printf("�������Ǻ� �Դϴ�. \n");
	}
	else if (35 <= a && 2 <= b)
	{
		printf("�����溸 �Դϴ�. \n");
	}
	else
	{
		printf("�������Ǻ�, �����溸 �����ϴ�. \n");
	}
	return 0;
}