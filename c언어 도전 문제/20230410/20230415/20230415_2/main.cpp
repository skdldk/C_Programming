#include <stdio.h>

int main(void)
{
	int i;
	int j;
	i = 2000000000;
	j = 3000000000;

	printf("%d\n", i);
	printf("%d\n", j);

	return 0;
}
//int의 범위인 -2,147,483,648 ~ 2,147,483,647를 초과하여 값이 나오지 않는다.