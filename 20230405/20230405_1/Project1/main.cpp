#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int cm, feet;
	double inch;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf_s("%d", &cm);

	inch = double(cm) / 2.54;
	feet = inch / 12;
	inch = inch - double(feet) * 12;

	printf("%dcm�� %d��Ʈ %.2f��ġ �Դϴ�. \n", cm, feet, inch);

	return 0;

}