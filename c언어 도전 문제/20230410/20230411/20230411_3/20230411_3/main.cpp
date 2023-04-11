#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int coin = 500;

    printf("동전을 넣어주십시오:");
    scanf("%d", &coin);

    if (coin >= 500)
    {
        printf("음료수가 나왔습니다. \n");
    }
    else if(coin <= 500)
        {
        printf("%d원이 반환되었습니다. \n", coin);
        }
    else
    {
       
    }
}