#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b; //��¥  

	a = 0;
	b = 0;
	

	printf("ù¶�� ü���µ��� �Է��Ͻʽÿ�:", a);
	scanf("%d", &a);

	printf("��¶�� ü���µ��� �Է��Ͻʽÿ�:", b);
	scanf("%d", &b);

	if (33 <= a && 33 <= b)
	{
		printf("�������Ǻ� �Դϴ�. \n");
	}
	else if (35 <= a && 35 <= b)
	{
		printf("�����溸 �Դϴ�. \n");
	}
	else
	{
		printf("�������Ǻ�,�����溸 �Ѵپƴմϴ�. \n");
	}
	return 0;
}