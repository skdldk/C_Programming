#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PIE 3.14

int main(void)
{
	float A, V, r;
	printf("�������� �Է��Ͻÿ�: ");
	scanf("%f", &r);

	A = 4.0 * PIE*r*r;
	V = 4.0 / 3.0 * PIE*r*r*r;

	printf("���� ǥ����: %f ���� ü��: %f\n", A, V);


	return 0;

}