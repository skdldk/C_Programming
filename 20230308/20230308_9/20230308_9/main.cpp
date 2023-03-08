/*     
* 파일이름 : main.c
* 성명     : 두수의 합을 구하는 프로그램입니다.  
* 작성자   : 김승준
* 작성일자 : 2023.03.08
*/

#include <stdio.h>  //전처리  header file

int main(void)  //메인 함수
{
	int x;  //변수(variable) 선언(define)
	int y;  //변하지 않는 수는 상수
	int sum;

	//int x, y, sum;

	x = 7;  //연산
	y = 3;
	
    ////////////덧셈//////////
	
	sum = x + y;
	printf("두 수의 핪: %d \n", sum); //출력

	//////////////뺄셈//////////
	sum = x - y;
	printf("두 수의 핪: %d \n", sum); //출력

	/////////////곱셈///////////
	sum = x * y;
	printf("두 수의 핪: %d \n", sum); //출력

	/////////////나눗셈////////
	sum = x / y;
	printf("두 수의 핪: %f \n", sum); //출력;

	////////////나머지////////
	sum = x % y;
	printf("x에 y를 나눈 나머지: %d \n", sum); //출력

	return 0;  //함수 값 반환
}

